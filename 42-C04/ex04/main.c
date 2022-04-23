#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	string[] = "  ---+--+1234ab567";
	int		nb;
	int		nb2;

	nb = atoi(string);
	nb2 = ft_atoi(string);
	printf("cc_atoi: %i\n", nb);
	printf("ft_atoi : %i\n", nb2);
	return (0);
}
