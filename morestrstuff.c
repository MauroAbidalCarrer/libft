/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morestrstuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:18:35 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/26 17:35:51 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[len] = 0;
	while (--len > 0)
		new[len] = s[start + len];
	return new;
}

#include<stdio.h>
int	test(char const *s, unsigned int start, size_t len)
{
	char* new = ft_substr(s, start, len);
	for (int i = 0; i < len - 1; i++)
	{
		if (s[start + i] != new[i])
		{
			printf("start =%d, len =%d\ns =%s\nog =%s\nmy =%s\n", start, len, s + start, new);
			return 1;
		}
	}
	return 0;
}

int main(int ac, char** av)
{
	printf("Starting tests\n");
	int errors = 0;
	for (int i = 1; i < ac; i *= 3)
	{
		errors += test(av[i], atoi(av[i + 1]), atoi(qv[i + 2]));
	}
	if (errors == 0)
		printf("No errors emncountered\n");
	else
		printf("%d errors encountered\n");
}
