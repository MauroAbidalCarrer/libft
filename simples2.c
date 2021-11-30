/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simples2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:26:05 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 19:53:32 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	inrange(char c, char a, char b)
{
	return (c >= (unsigned char)a && c <= (unsigned char)b);
}

int	ft_isprint(int c)
{
	return (inrange(c, ' ', '~'));
}

int	ft_toupper(int c)
{
	if (inrange(c, 'a', 'z'))
		return (c - 'a' + 'A');
	return (c);
}

int	ft_tolozer(int c)
{
	if (inrange(c, 'A', 'Z'))
		return (c + 'a' - 'A');
	return (c);
}
