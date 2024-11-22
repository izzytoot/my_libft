# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 14:47:57 by root              #+#    #+#              #
#    Updated: 2024/11/15 16:17:53 by icunha-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                NAMES & PATHS                                 #
#==============================================================================#
NAME = libftprintf.a

TESTER = tester.a

SRCS = src/ft_printf.c src/ft_printchar.c src/ft_printstr.c src/ft_printint_nb.c src/ft_printint_u.c src/ft_printint_hex.c src/ft_printptr.c

TESTER_SRC = my_main.c

OBJS = $(SRCS:.c=.o)

HEADER = ./ft_printf.h
#==============================================================================#
#                            FLAGS & COMMANDS                                  #
#==============================================================================#
C_COMP = cc

FLAGS = -Wall -Werror -Wextra

RM = rm -f

AR = ar rcs
#==============================================================================#
#                                 COLORS                                       #
#==============================================================================#
RED		= "\033[0;31m"
GREEN		= "\033[0;32m"  
RESET		= "\033[0m"
#==============================================================================#
#                                  RULES MAIN_LIB                              #
#==============================================================================#
all: $(NAME)

%.o: %.c $(HEADER)
	$(C_COMP) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo $(GREEN) "$(NAME) was created successfully!"$(RESET)
#==============================================================================#
#                                  RULES TEST                                  #
#==============================================================================#
test: all 
	@$(C_COMP) $(FLAGS) $(SRCS) $(TESTER_SRC) -o $(TESTER)
	@echo $(GREEN) "$(TESTER) was created successfully!"$(RESET)
	./$(TESTER)
	@echo $(GREEN) "Testing complete!"$(RESET)

cleantest:
	@$(RM) $(TESTER)
	@echo $(RED) "Tester deleted!" $(RESET)
#==============================================================================#
#                                  RULES CLEAN                                 #
#==============================================================================#
clean:
	@$(RM) $(OBJS)
	@echo $(RED) "Objs deleted!" $(RESET)
	
fclean: clean cleantest
	@$(RM) $(NAME)
	@echo $(RED) "$(NAME) deleted!" $(RESET)

re: fclean all

.PHONY: all clean fclean re get_libft test cleantest
