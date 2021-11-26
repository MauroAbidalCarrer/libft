#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void*	ft_memcpy(void* dst, void* src, int n)
{
	while (n-- > 0)
		((unsigned char*)dst)[n] = ((unsigned char*)src)[n];
	return (dst);
}

void*	ft_memmove(void* dst, void* src, int len)
{
	return (ft_memcpy(dst, src, len));
}

int main(int ac, char** av)
{
	int offset = atoi(av[1]);
	int len = atoi(av[2]);
	
	char str[100] = "bonjour, ca va?";
	ft_memmove(str + offset, str, len);
	printf("%s\n\n", str);

	char str2[100] = "bonjour, ca va?";
	memmove(str2 + offset, str2, len);
	printf("%s\n", str2);
}
