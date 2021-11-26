int inrange(char c, char a, char b)
{
	return (c >= (unsigned char)a && c <= (unsigned char)b);
}

int ft_strlen(char* str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

void*	ft_memset(void* b, int c, int len)
{
	while (len > 0)
		b[len--] = (unsigned char)c;
	return b;
}

void	ft_bzero(void* s, int n)
{
	ft_memset(s, 0, n);
}

void*	ft_memcpy(void* dst, void* src, int n)
{
	while (n > 0)
	{
		dst[n] = src[n];
		n--;
	}
}

void*	ft_memmove(void* dst, void* src, int n)
{
	int i;

	i = 0;bonjour
	while (i < dst - src)

}
