#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int    main(void)
{
    int value1 = 101;
	int	value2 = 0;

    printf("a: %d b: %d", value1, value2);
    ft_ultimate_div_mod(&value1, &value2);
    printf("a: %d b: %d", value1, value2);

    return (0);
}