/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:24:55 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/02 18:09:45 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

static const char	*skips(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == c)
		i++;
	return (str + i);
}

static const char	*skipw(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (str + i);
}

static int	getnbwords(const char *str, char c)
{
	int	nbwords;

	nbwords = (*str != c && *str);
	while (*str && str[1])
	{
		str++;
		nbwords += (str[-1] == c && *str != c);
	}
	return (nbwords);
}

static char	*dupuntil(const char *str, char c)
{
	int		len;
	char	*dup;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	dup[len] = 0;
	while (--len >= 0)
		dup[len] = str[len];
	return (dup);
}

char	**ft_split(const char *str, char c)
{
	int		nbwords;
	int		i;
	char	**words;

	if (str == NULL)
		return (NULL);
	nbwords = getnbwords(str, c);
	words = malloc(sizeof(char *) * (nbwords + 1));
	if (words == NULL)
		return (NULL);
	words[nbwords] = 0;
	i = 0;
	while (i < nbwords)
	{
		str = skips(str, c);
		words[i] = dupuntil(str, c);
		if (words[i++] == NULL)
			return (NULL);
		str = skipw(str, c);
	}
	return (words);
}
/*
int main(int ac, char** av)
{
	char** words = ft_split(av[1], av[2][0]);
	while (*words)
	{
		printf("%s\n", *words);
		free(*words);
		words++;
	}
}
*/
