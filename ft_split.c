/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:24:55 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/26 22:16:47 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	getnbwords(char const *str, char c)
{
	int	nb;

	nb = *str != c;
	while (*++str)
	{
		if (str[-1] == c && *str != c)
			nb++;
	}
	return (nb);
}

int	next(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i + (str[i] == c));
}

char	*dup(char const *str, char c)
{
	char	*new;
	int		size;

	size = 0;
	new = (char *)str;
	while (new[size] && new[size] != c)
		size++;
	new = malloc(sizeof(char) * (1 + size));
	if (new == NULL)
		return (NULL);
	new[size] = 0;
	while (--size >= 0)
		new[size] = str[size];
	return (new);
}

char	**ft_split(char const *s1, char c)
{
	int		nbwords;
	char	**words;
	int		i;

	if (s1 == NULL)
		return (NULL);
	nbwords = getnbwords(s1, c);
	words = malloc(sizeof(char *) * (nbwords + 1));
	words[nbwords] = 0;
	i = -1;
	while (++i < nbwords)
	{
		words[i] = dup(s1, c);
		s1 += next(s1, c);
		if (words == NULL)
			return (NULL);
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
