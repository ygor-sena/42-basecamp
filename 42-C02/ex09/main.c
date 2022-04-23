#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	origem[] = "oi, tudo BEM? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("Before: %s\n", origem);
	printf("After: %s\n", ft_strcapitalize(origem));
}