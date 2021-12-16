/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:46:26 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/16 15:03:50 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst || !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
		return (d);
	}
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
