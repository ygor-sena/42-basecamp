#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	origem[] = "ygor";
	char	destino[] = "YGOR";

	printf("String 1: %s\nResult 1: %i\n",
		origem, ft_str_is_uppercase(origem));
	printf("String 2: %s\nResult 2: %i\n",
		destino, ft_str_is_uppercase(destino));
}
