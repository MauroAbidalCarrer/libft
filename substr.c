/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morestrstuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:18:35 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/26 19:23:27 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char const *str)
{
	int	i;

	while (str[i])
		i++;
	return (i - 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new = (char *)malloc(sizeof(char));
		new[0] = '\0';
		return (new);
	}
	new = malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[len] = 0;
	s += start;
	i = 0;
	while (*s && len-- > 0)
		new[i++] = *s++;
	return (new);
}
/*
int	test(char const *s, unsigned int start, size_t len)
{
	char* new = ft_substr(s, start, len);
	int errors = 0;
	printf("start =%d, len =%zu\ns =%s\n", start, len, s);
	for (int i = 0; i < len - 1; i++)
	{
		if (s[start + i] != new[i])
			errors++;
	}
	printf("og =%s\nmy =%s\n\n", s + start, new);
	return 0;
}

int main(int ac, char** av)
{
	printf("Starting tests(%d).\n",(ac - 1) / 3);
	int errors = 0;
	for (int i = 1; i < ac - 1; i *= 3)
	{
		errors += test(av[i], atoi(av[i + 1]), atoi(av[i + 2]));
	}
	if (errors == 0)
		printf("No errors encountered.\n");
	else
		printf("%d errors encountered.\n",errors);
}
*/
