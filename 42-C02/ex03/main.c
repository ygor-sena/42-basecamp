#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	origem[] = "192345670";
	char	destino[] = "YgOeRewe434 ADSWEew";

	printf("String 1: %s\nResult 1: %i\n",
		origem, ft_str_is_numeric(origem));
	printf("String 2: %s\nResult 2: %i\n",
		destino, ft_str_is_numeric(destino));
}
