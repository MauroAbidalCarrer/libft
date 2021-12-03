/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:26:01 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/02 20:09:08 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	char			*ptr;

	ptr = (char *)b;
	i = 0;
	while (i < len)
		ptr[i++] = (char)c;
	return (ptr);
}

void	ft_bzero(void *s, int n)
{
	ft_memset(s, 0, n);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
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

void	*ft_memmove(void *dst, const void *src, size_t n)
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
