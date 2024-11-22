# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 13:30:18 by icunha-t          #+#    #+#              #
#    Updated: 2024/11/22 13:35:20 by icunha-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                NAMES & PATHS                                 #
#==============================================================================#
NAME = libft.a 

PRINTF_TESTER_PATH = $(addprefix $(PRINTF_PATH)/, printftester.a)

HEADER_PATH = ./libft.h

BASIC_PATH = ./basic

PRINTF_PATH = ./printf

SRCS = $(addprefix $(BASIC_PATH)/, ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_memchr.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_itoa.c)

PRINTF_SRCS = $(addprefix $(PRINTF_PATH)/, src/ft_printf.c src/ft_printchar.c src/ft_printstr.c src/ft_printint_nb.c src/ft_printint_u.c src/ft_printint_hex.c src/ft_printptr.c)

PRINTF_TESTER_SRC = $(addprefix $(PRINTF_PATH)/, my_main_printf.c)

OBJS = $(SRCS:.c=.o)

PRINTF_OBJS = $(PRINTF_SRCS:.c=.o)
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
all: extra get_printflib $(NAME)

%.o: %.c $(HEADER_PATH)
	$(C_COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo $(GREEN) "$(NAME) was created successfully!" $(RESET)

extra: $(OBJS) $(PRINTF_OBJS)
	@$(AR) $(NAME) $(OBJS) $(PRINTF_OBJS)
	@echo $(GREEN) "$(NAME) was created with extras successfully!" $(RESET)

get_printflib:
	@if [ ! -d "$(PRINTF_PATH)" ]; then \
		git clone https://github.com/izzytoot/ft_printf.git $(PRINTF_PATH); \
		echo $(GREEN)"printf downloaded successfully!"$(RESET); \
	else \
		echo $(YELLOW)"Printf already exists. Skipping clone."$(RESET); \
	fi
#==============================================================================#
#                                  RULES TEST                                  #
#==============================================================================#
printftest: all 
	@$(C_COMP) $(FLAGS) $(PRINTF_SRCS) $(PRINTF_TESTER_SRC) -o $(PRINTF_TESTER_PATH)
	@echo $(GREEN) "$(PRINTF_TESTER) was created successfully!"$(RESET)
	./$(PRINTF_TESTER_PATH)
	@echo $(GREEN) "Printf testing complete!"$(RESET)

cleantest:
	@$(RM) $(PRINTF_TESTER)
	@echo $(RED) "Printf tester was deleted!" $(RESET)
#==============================================================================#
#                                  CLEAN RULES                                 #
#==============================================================================#
clean:
	@$(RM) -f $(OBJS)
	@echo $(RED) "All .o files were deleted!" $(RESET)
	
fclean: cleantest clean
	@$(RM) $(NAME)
	@echo $(RED) "$(NAME) was deleted!" $(RESET)

re: fclean all

.PHONY: all clean fclean re get_printflib cleantest extra
