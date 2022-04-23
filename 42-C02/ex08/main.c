#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	origem[] = "YGOR DE GOES SENA";

	printf("Before: %s\n", origem);
	printf("After: %s\n", ft_strlowcase(origem));
}