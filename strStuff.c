char*	ft_strchr(char* str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return str;
	return 0;
}

char*	ft_strrchr(char* str, int c)
{
	int i;
	char* j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == (char)c)
			j = str + i;
	}
	return(j);
}

int	ft_strncmp(char* s1, char* s2, int n)
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

void*	ft_memchr(void* s, int c, int n)
{
	unsigned char* str;

	str = (unsigned char*)s;
	if (n == 0)
		return 0;
	while (n > 0 && *str++ != (unsigned char)c)
		n--;
	if (*str == (unsigned char)c)
		return s;
	return 0;
}

int	ft_memcmp(void* s1, void* s2, int n)
{
	unsigned char* str1;
	unsigned char* str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (n > 0 && str1++ == str2++)
		n--;
	return ((*str1 - *str2) * (n != 0));
}

char*	ft_strnstr(char* haystack, char* needle, int len)
{
	int i;

	if (len == 0)
		return (0);
	while (len-- > 0 && *haystack)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (haystack[i + 1] == 0)
				return haystack;
			i++;
		}
	}
	return 0;
}

#include<ctype.h>
int ft_atoi(char* str)
{
	unsigned int	sign;
	unsigned int	nb;

	while (*str == ' ' || (*str >= 9 && *str <= 13)
		str++;
	sign = 1 * -(*str == '-');
	while (isdigit(*(++str)))
		nb = nb * 10 + *str - '0';
	return nb * sign;
}

int	

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int ac, char** av)
{
	av[1][2] = '\t';
	printf("%d\n", atoi(av[1]));
}	
