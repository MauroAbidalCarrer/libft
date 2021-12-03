/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strStuff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:46:52 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/03 19:28:43 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return (s);
	return (0);
}

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*j;
	char	*s;

	s = (char *)str;
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] == (char)c)
			j = s + i;
	}
	if (c == 0)
		return (s + i);
	return (j);
}

int	ft_strncmp(const char *s1, const char *s2, int n)
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dastack;

	if (!haystack || !needle)
		return (0);
	dastack = (char *)haystack;
	if (!*needle)
		return (dastack);
	i = 0;
	while (dastack[i] && i < len)
	{
		j = 0;
		while (dastack[i + j] == needle[j] && i + j < len)
		{
			if (!needle[j + 1])
				return (dastack + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
