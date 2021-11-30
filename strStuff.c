/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strStuff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:46:52 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/30 19:00:01 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return (str);
	return (0);
}

char	*ft_strrchr(char *str, int c)
{
	int	i;
	char	*j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == (char)c)
			j = str + i;
	}
	if (c == 0)
		return (str + i);
	return (j);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && --n > 0)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

#include<stdio.h>
char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int	i;
	int	j;

	if (!haystack || !needle)
		return (0);
	if (!*needle)
		return (haystack);
	i = 0;
//	printf("\n");
	while (haystack[i] && i < len)
	{
//		printf("%s\n", haystack + i);
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (!needle[j + 1])
				return(haystack + i);
			j++;
		}
		i++;
	}
	return(0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
