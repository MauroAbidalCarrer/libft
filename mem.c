/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:26:01 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/02 18:57:27 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memset(void *b, int c, int len)
{
	char	*ptr;

	ptr = (char *)b;
	while (--len >= 0)
		ptr[len] = (char)c;
	return (ptr);
}

void	ft_bzero(void *s, int n)
{
	ft_memset(s, 0, n);
}

void	*ft_memcpy(void *dst, void *src, int n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst || !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
	{
		while (--n >= 0)
			d[n] = s[n];
		return (d);
	}
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (d);
}

void	*ft_memmove(void *dst, void *src, int n)
{
	return (ft_memcpy(dst, src, n));
}

/*
#include<stdlib.h>
#include<stdio.h>
int  main(int ac, char** av)
{
	char test[] = "bonjour, ca va?";
	printf("dst=%s\nsrc=%s\nn=%d\n", test, test + atoi(av[1]), atoi(av[2]));
	ft_memmove(test, test + atoi(av[1]), atoi(av[2]));
	printf("after=%s\n", test);
}
*/
