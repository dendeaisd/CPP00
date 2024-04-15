# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 04:28:12 by fvoicu            #+#    #+#              #
#    Updated: 2024/04/15 04:32:43 by fvoicu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    :=      megaphone
CC		:=      c++
FLAGS	:=      -Wall -Wextra -Werror -std=c++98
SRC		:=		main.cpp
OBJ		:=		$(SRC:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
		rm -rf $(OBJ)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
