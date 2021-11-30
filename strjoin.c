/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:27:34 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 19:54:44 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		length;

	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = malloc(sizeof(char) * length);
	if (new == NULL)
		return (NULL);
	while (*s1)
		*new++ = *s1++;
	while (*s2)
		*new++ = *s2++;
	*new = 0;
	return (new - length + 1);
}

/*
#include<stdio.h>
int main(int ac,char** av)
{
	printf("%s\n", ft_strjoin(av[1], av[2]));
}
*/
