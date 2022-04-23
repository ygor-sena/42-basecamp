#include <stdio.h>

void    ft_swap(int *a, int *b);

int    main(void)
{
    int value1 = 21;
	int	value2 = 42;

    printf("Before : %d, %d\n", value1, value2);
    ft_swap(&value1, &value2);
    printf("After : %d, %d\n", value1, value2);

    return (0);
}