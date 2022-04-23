#include <stdio.h>

void    ft_ultimate_ft(int *********nb);

int    main(void)
{
    int    value = 1;
    int *nbr1 = &value;
    int **nbr2 = &nbr1;
    int ***nbr3 = &nbr2;
    int ****nbr4 = &nbr3;
    int *****nbr5 = &nbr4;
    int ******nbr6 = &nbr5;
    int *******nbr7 = &nbr6;
    int ********nbr8 = &nbr7;

    printf("Before : %d\n", value);
    ft_ultimate_ft(&nbr8);
    printf("After : %d\n", value);

    return (0);
}