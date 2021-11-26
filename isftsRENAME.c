int inrange(char c, char a, char b)
{
	return (c >= (unsigned char)a && c <= (unsigned char)b);
}
int	ft_isalpha(int c)
{
	return (inrange(c, 'a', 'z') || inrange(c, 'A','Z'));
}

int	ft_isdigit(int c)
{
	return (inrange(c, '0', '9'));
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	ft_isascii(int c)
{
	return (inrange(c, (char)0, (char)255));
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
/*
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int testOneC(int c, int (*my)(int c), int (*og)(int c))
{
	int myResult = (*my)(c);
	int ogResult = (*og)(c);
	if (myResult != ogResult)
		printf("my(%d) = %d\nog(%d) = %d\n", c, (*my)(c), c, (*og)(c));
	return myResult == ogResult;
}


int test(int (*my)(int c), int (*og)(int c), char* name)
{
	printf("Testing %s.\n", name);
	int result = 1;
	for(int c = 0; c <= 255; c++)
		result *= testOneC(c,my, og);
	if(result == 0)
		printf("Some result missmatch.\n");
	else
		printf("All results match.\n");
	printf("\n");
	return result;
}
int main(int ac, char** av)

{
	int a = atoi(av[1]);
	test(&ft_isalpha, &isalpha,"isalpha");
	test(&ft_isdigit, &isdigit,"isdigit");
	test(&ft_isalnum, &isalnum,"isalnum");
	test(&ft_isascii, &isascii,"isascii");
	test(&ft_isprint, &isprint,"isprint");
}
*/
