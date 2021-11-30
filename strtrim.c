/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:56:14 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 19:54:56 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

static int	isin(char c, char const *s)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (c == *str++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*new;
	int		size;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	size = 0;
	new = (char *)s1 - 1;
	while (*++new)
		size += !isin(*new, s2);
	new = malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	new[size] = 0;
	i = 0;
	while (i < size)
	{
		if (!isin(*s1, s2))
		{
			new[i] = *s1;
			i++;
		}
		s1++;
	}
	return (new);
}
/*
int main(int ac, char** av)
{
	printf("%s\n", ft_strtrim((const char*)av[1], (const char*)av[2]));
}
*/
