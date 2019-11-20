#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/15 18:00:01 by mnguyen           #+#    #+#              #
#    Updated: 2015/06/15 19:16:39 by mnguyen          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = awesomephonebook

CC = clang++

FLAGS = -Wall -Wextra -Werror -O

SRCS = phonebook.cpp Contact.class.cpp

SRCO = $(SRCS:.cpp=.o)

.PHONY: clean fclean all

all: $(NAME)

$(NAME): $(SRCO)
		$(CC) -o $(NAME) $(SRCO) -I .

%.o: %.cpp
		$(CC) -o  $@ -c $< $(FLAGS)

clean:
		rm -f $(SRCO)

fclean:	clean
		rm -f $(NAME)

re:	fclean all