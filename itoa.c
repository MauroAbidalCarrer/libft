/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:17:01 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 19:55:09 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static long	ft_abs(int n)
{
	long	o;

	o = (long)n;
	if (o < 0)
		return (-o);
	return (o);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	i;

	size = (n < 0) + 1;
	i = ft_abs(n);
	while (i > 10)
	{
		i /= 10;
		size++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	str[size] = 0;
	*str = '-';
	i = (n < 0);
	while (--size >= i)
	{
		str[size] = '0' + ft_abs(n) % 10;
		n /= 10;
	}
	return (str);
}
/*
#include<stdio.h>
int main(int ac, char ** av)
{
	for (int i = 1; i < ac; i++)
	{
		char *nb = ft_itoa(atoi(av[i]));
		printf("%s\n", nb);
		free(nb);
	}
}
*/
