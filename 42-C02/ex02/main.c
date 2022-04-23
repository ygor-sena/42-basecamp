#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	origem[] = "zadsfsd";
	char	destino[] = "12303 465";

	printf("String 1: %s\nResult 1: %i\n",
		origem, ft_str_is_alpha(origem));
	printf("String 2: %s\nResult 2: %i\n",
		destino, ft_str_is_alpha(destino));
}
