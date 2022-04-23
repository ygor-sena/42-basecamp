#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	origem[] = "ygor de$$$ goes sena";

	printf("Before: %s\n", origem);
	printf("After: %s\n", ft_strupcase(origem));
}
