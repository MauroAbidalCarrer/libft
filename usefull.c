/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:26:01 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 16:28:33 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	inrange(char c, char a, char b)
{
	return (c >= (unsigned char)a && c <= (unsigned char)b);
}
*/

int	ft_strlen(char* str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

void	*ft_memset(void* b, int c, int len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
		ptr[len--] = (unsigned char)c;
	return ptr;
}

void	ft_bzero(void* s, int n)
{
	ft_memset(s, 0, n);
}

void*	ft_memcpy(void* dst, void* src, int n)
{
	unsigned char	*d;

	d = (unsigned char *)dst;
	while (n > 0)
	{
		d[n] = ((unsigned char *)src)[n];
		n--;
	}
}

void*	ft_memmove(void* dst, void* src, int n)
{
	ft_memcpy(dst, src, n);
}
