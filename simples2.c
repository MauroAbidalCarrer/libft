/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simples2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:26:05 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/03 21:15:06 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

int	ft_tolower(int c)
{
	if (c >= (int) 'A' && c <= (int) 'Z')
		return (c + 'a' - 'A');
	return (c);
}
/*
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int testOneC(int c, int (*my)(int c), int (*og)(int c))
{
	int myResult = (*my)(c);
	int ogResult = (*og)(c);
	if (myResult != ogResult)
		printf("my(%d) = %d\nog(%d) = %d\n", c, (*my)(c), c, (*og)(c));
	return myResult == ogResult;
}


int test(int (*my)(int c), int (*og)(int c), char* name)
{
	printf("Testing %s.\n", name);
	int result = 1;
	for(int c = 0; c <= 530; c++)
		result *= testOneC(c, my, og);
	if(result == 0)
		printf("Some result missmatch.\n");
	else
		printf("All results match.\n");
	printf("\n");
	return result;
}
int main(int ac, char** av)

{
	test(&ft_isprint, &isprint,"isprint");
}
*/
