#include <stdio.h>

void ft_ft(int *nbr);

int    main(void)
{
    int    value = 1;

    printf("Before : %d\n", value);
    ft_ft(&value);
    printf("After : %d\n", value);

    return (0);
}
