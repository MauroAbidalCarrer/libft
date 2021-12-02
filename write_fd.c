/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_fd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:43:20 by maabidal          #+#    #+#             */
/*   Updated: 2021/12/02 18:43:58 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void	putdigit(long n, int fd)
{
	if (n >= 10)
		putdigit(n / 10, fd);
	ft_putchar_fd('0' + n % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		putdigit(-((long)n), fd);
	}
	else
		putdigit((long)n, fd);
}
