/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strStuff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:46:52 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 19:49:01 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return (str);
	return (0);
}

char	*ft_strrchr(char *str, int c)
{
	int	i;
	char	*j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == (char)c)
			j = str + i;
	}
	return (j);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int	i;

	if (len == 0)
		return (0);
	while (len-- > 0 && *haystack)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (haystack[i + 1] == 0)
				return (haystack);
			i++;
		}
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
