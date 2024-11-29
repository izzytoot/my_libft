# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 13:30:18 by icunha-t          #+#    #+#              #
#    Updated: 2024/11/29 16:02:22 by icunha-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                NAMES & PATHS                                 #
#==============================================================================#
NAME = libft.a 

HEADER_PATH = ./libft.h
BASIC_PATH = ./basic
PRINTF_PATH = ./printf
PRINTF_TESTER_PATH = $(addprefix $(PRINTF_PATH)/, printftester.a)
GNL_PATH = ./gnl
GNL_TESTER_PATH = $(addprefix $(GNL_PATH)/, gnltester.a)
EXTRAS_PATH = ./extras

SRCS = $(addprefix $(BASIC_PATH)/, ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_memchr.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_itoa.c)
PRINTF_SRCS = $(addprefix $(PRINTF_PATH)/, src/ft_printf.c src/ft_printchar.c src/ft_printstr.c src/ft_printint_nb.c src/ft_printint_u.c src/ft_printint_hex.c src/ft_printptr.c)
PRINTF_TESTER_SRC = $(addprefix $(PRINTF_PATH)/, my_main_printf.c)
GNL_SRCS = $(addprefix $(GNL_PATH)/, get_next_line_bonus.c get_next_line_utils_bonus.c)
GNL_TESTER_SRC = $(addprefix $(GNL_PATH)/, tester/gnl_main.c)
EXTRAS_SRCS = $(addprefix $(EXTRAS_PATH)/, ft_free.c)

OBJS = $(SRCS:.c=.o)
PRINTF_OBJS = $(PRINTF_SRCS:.c=.o)
GNL_OBJS = $(GNL_SRCS:.c=.o)
EXTRAS_OBJS = $(EXTRAS_SRCS:.c=.o)
#==============================================================================#
#                            FLAGS & COMMANDS                                  #
#==============================================================================#
C_COMP = cc

FLAGS = -Wall -Werror -Wextra

FLAGS += -g

RM = rm -f

AR = ar rcs

MAKE = make
#==============================================================================#
#                                  COLORS                                      #
#==============================================================================#
RED		= "\033[0;31m"
GREEN		= "\033[0;32m"  
YELLOW		= "\033[0;33m" 
RESET		= "\033[0m"
#==============================================================================#
#                                  RULES                                       #
#==============================================================================#
all: extra get_printflib get_gnllib $(NAME)

%.o: %.c $(HEADER_PATH)
	$(C_COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo $(GREEN) "$(NAME) was created successfully!" $(RESET)

extra: $(OBJS) $(PRINTF_OBJS) $(GNL_OBJS) $(EXTRAS_OBJS)
	@$(AR) $(NAME) $(OBJS) $(PRINTF_OBJS) $(GNL_OBJS) $(EXTRAS_OBJS)
	@echo $(GREEN) "$(NAME) was created with extras successfully!" $(RESET)
#==============================================================================#
#                                  RULES TEST                                  #
#==============================================================================#
printftest: all 
	@$(C_COMP) $(FLAGS) $(PRINTF_SRCS) $(PRINTF_TESTER_SRC) -o $(PRINTF_TESTER_PATH)
	@echo $(GREEN) "Printf tester was created successfully!"$(RESET)
	./$(PRINTF_TESTER_PATH)
	@echo $(GREEN) "Printf testing complete!"$(RESET)

gnltest: all
	@$(C_COMP) $(FLAGS) $(GNL_SRCS) $(GNL_TESTER_SRC) -o $(GNL_TESTER_PATH)
	@echo $(GREEN) "GNL tester was created successfully!"$(RESET)
	./$(GNL_TESTER_PATH) $(ARGS) $(addprefix $(GNL_PATH)/, tester/shrek.txt tester/textfile.txt)
	@echo $(GREEN) "GNL testing complete!"$(RESET)

cleantests:
	@$(RM) $(PRINTF_TESTER_PATH) $(GNL_TESTER_PATH)
	@echo $(RED) "Testers deleted!" $(RESET)
#==============================================================================#
#                                  CLEAN RULES                                 #
#==============================================================================#
clean:
	@$(RM) -f $(OBJS) $(PRINTF_OBJS) $(GNL_OBJS) $(EXTRAS_OBJS)
	@echo $(RED) "All .o files were deleted!" $(RESET)
	
fclean: cleantests clean
	@$(RM) $(NAME)
	@echo $(RED) "$(NAME) was deleted!" $(RESET)

re: fclean all
#==============================================================================#
#                                  GET TEST                                    #
#==============================================================================#
get_printflib:
	@if [ ! -d "$(PRINTF_PATH)" ]; then \
		git clone https://github.com/izzytoot/ft_printf.git $(PRINTF_PATH); \
		echo $(GREEN)"Printf downloaded successfully!"$(RESET); \
	else \
		echo $(YELLOW)"Printf already exists. Skipping clone."$(RESET); \
	fi
get_gnllib:
	@if [ ! -d "$(GNL_PATH)" ]; then \
		git clone https://github.com/izzytoot/get_next_line.git $(GNL_PATH); \
		echo $(GREEN)"GNL downloaded successfully!"$(RESET); \
	else \
		echo $(YELLOW)"GNL already exists. Skipping clone."$(RESET); \
	fi

.PHONY: all clean fclean re get_printflib printftest gnltest cleantests extra
