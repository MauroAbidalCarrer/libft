/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:57:47 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/30 16:40:33 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *s, int c, int n)
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

int	ft_memcmp(void *s1, void *s2, int n)
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
