/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:57:47 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/02 19:34:05 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buf;

	buf = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*buf == (unsigned char)c)
			return (buf);
		buf++;
	}
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return ((*str1 - *str2));
		str1++;
		str2++;
		n--;
	}
	return (0);
}
