/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:59:04 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/02 18:39:37 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	char	c;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	new = malloc((i + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[i] = 0;
	i = 0;
	while (s[i])
	{
		c = s[i];
		new[i] = (*f)((unsigned int)i, c);
		i++;
	}
	return (new);
}
