/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:06:31 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/02 19:01:02 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, const char *src, int siz)
{
	int			n;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	n = siz;
	if (n != 0)
	{
		while (--n != 0)
		{
			*d++ = *s++;
			if (d[-1] == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (siz != 0)
			*d = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
