# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maabidal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 20:08:50 by maabidal          #+#    #+#              #
#    Updated: 2021/12/08 17:12:01 by maabidal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	atoi.c\
		mem.c\
		mem2.c\
		strdup.c\
		strlcpy.c\
		simples2.c\
		calloc.c\
		strtrim.c\
		simples.c\
		striteri.c\
		itoa.c\
		strlcat.c\
		substr.c\
		strmapi.c\
		split.c\
		strjoin.c\
		strStuff.c\
		write_fd.c

NAME	= libft.a
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f
OBJS	= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $@ $^

.o : .c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :    fclean all

so:
	$(CC) -fPIC $(CFLAGS) -c $(SRCS)
	gcc -shared -o libft.so $(OBJS)

.PHONY : all clean fclean re
