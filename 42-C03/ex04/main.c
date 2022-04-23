#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main (void)
{
	char *p;
	char *q;

	q = strstr("isto é um teste", "\n");
	p = ft_strstr("isto é um teste", "\n");
	printf("cc_strstr: %s\n", q);
	printf("ft_strstr: %s\n", p);
	return (0);    
}