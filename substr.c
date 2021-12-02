/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:18:35 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/02 19:07:59 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static size_t	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (s == NULL)
		return (NULL);
	if (start + len > ft_strlen(s))
	{
		new = malloc(sizeof(char));
		*new = 0;
		return (new);
	}
	new = malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[len] = 0;
	while (1)
	{
		len--;
		new[len] = s[start + len];
		if (len == 0)
			break ;
	}
	return (new);
}
/*
int main(int ac, char** av)
{
	char *str = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
	printf("%s\n", str);
	free(str);
}
static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
*/
