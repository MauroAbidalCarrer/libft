# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maabidal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 20:08:50 by maabidal          #+#    #+#              #
#    Updated: 2021/11/30 15:23:42 by maabidal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= atoi.c\
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
	  substr.c\
	  strmapi.c\
      	  split.c\
      	  strjoin.c\
	  strStuff.c\
	  write_fd.c
OBJS	= ${SRCS:.c=.o}
HEADER  = includes
CFLAGS  = -Wall -Wextra -Werror
RM	= rm -f

%.o: %.c
	gcc -Wall -Wextra -Werror -c ${SRCS} 
all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} libft.a

re:			fclean all

so:
	gcc -fPIC -Wall -Werror -Wextra -c *.c
	gcc -shared -o libft.so *.o 
