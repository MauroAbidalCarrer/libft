/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simples.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:27:16 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/30 17:07:17 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	inrange(int c, char a, char b)
{
	return (c >= (unsigned char)a && c <= (unsigned char)b);
}

int	ft_isalpha(int c)
{
	return (inrange(c, 'a', 'z') || inrange(c, 'A', 'Z'));
}

int	ft_isdigit(int c)
{
	return (inrange(c, '0', '9'));
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	ft_isascii(int c)
{
	return (inrange(c, (char)0, (char)255));
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
	test(&ft_isalpha, &isalpha,"isalpha");
	test(&ft_isdigit, &isdigit,"isdigit");
	test(&ft_isalnum, &isalnum,"isalnum");
	test(&ft_isascii, &isascii,"isascii");
//	test(&ft_isprint, &isprint,"isprint");
}
*/