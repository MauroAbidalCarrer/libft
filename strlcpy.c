/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:06:31 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/30 19:43:38 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (size == 0)
		return (0);
	while (src[j] != '\0')
	{
		if (i < size - 1 && size > 0)
		{
			dest[i] = src[i];
			i++;
		}
		j++;
	}
	dest[i] = '\0';
	return (j);
}

#include<string.h>
#include<stdio.h>

int main(int ac, char** av)
{
	char test [] = "BBBB";
	char buff1[20];
	char buff2[20];
	printf("my=%d\n", ft_strlcpy(buff1, test, 0));
	printf("og=%d\n", strlcpy(buff2, test, 0));
	printf("my=%s\n",buff1);
	printf("og=%s\n",buff2);
}
