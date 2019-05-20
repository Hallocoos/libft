#include <stdio.h>
#include <string.h>
//#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	s = b;
	while (len-- > 0)
		*s++ = c;
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int main(void)
{
	char *s = "alkjsdhflkjahsdf";
	ft_bzero(s, 1);
	printf("%s", s);
}
