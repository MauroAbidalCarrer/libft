/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:06:31 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 20:06:51 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
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
