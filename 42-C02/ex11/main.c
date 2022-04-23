#include <stdio.h>

void	ft_putstr_with_non_printable(char *str);

int	main(void)
{
	char	test_src[] = "Ygor\nna42";

	ft_putstr_with_non_printable(test_src);
}
