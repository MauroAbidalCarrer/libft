/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabidal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:07:07 by maabidal          #+#    #+#             */
/*   Updated: 2021/11/29 19:11:18 by maabidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *str)
{
	char	*new;
	int	length;

	if (str == NULL)
		return (NULL);
	length = 1;
	while (str[length - 1])
		length++;
	new = malloc(length * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (length >= 0)
	{
		new[length] = str[length];
		length--;
	}
	return (new);
}

/*
#include<stdio.h>
#include<string.h>
int test(char* str)
{
	char* og = strdup(str);
	char* my = ft_strdup(str);
	if ((my == NULL) != (og == NULL))
	{
		printf("str= %s\nmy= %p\nog= %p\n\n", str, my, og);
		return 1;
	}
	if (my == NULL)
		return 0;
	int error = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (my[i] != og[i])
		{
			printf("str =%s\nmy  =%s\nog  =%s\n\n",str, my, og);
			error = 1;
			break;
		}
	}
	free(my);
	free(og);
	return (error);
}

int main(int ac, char** av)
{
	char tests[][50] = 
	{
		"",
		"awreawer",
		"q",
		"Bonjour\200qwe"
	};
	int errors = 0;
	printf("Starting tests\n");
	for (int i = 0; i < 4; i++)
		errors = test(tests[i]);
	for (int i = 1; i < ac; i++)
		errors = test(av[i]);
	if (errors > 0)
		printf("%d erros enountered\n", errors);
	else
		printf("No errors enountered\n");
}
*/
