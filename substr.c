/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:18:35 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 19:16:21 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[len] = 0;
	while (--len > 0)
		new[len] = s[start + len];
	return (new);
}
