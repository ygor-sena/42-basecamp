#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	origem[] = "zyg or";
	char	destino[] = "ZYGOR";

	printf("String 1: %s\nResult 1: %i\n",
		origem, ft_str_is_lowercase(origem));
	printf("String 2: %s\nResult 2: %i\n",
		destino, ft_str_is_lowercase(destino));
}
