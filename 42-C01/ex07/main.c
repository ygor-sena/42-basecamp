#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

int  main(void)
{
	int size = 5;
	int a[] = {0, 1, 2, 3, 4};
	int *tab = &a[0];
	int i = 0;
	
	printf("Array Inicial -> ");
	while (i < size)
	{
		printf("%d", a[i]);
		i++;
	}
	printf("\n");  
	ft_rev_int_tab(tab, size);
	printf("Array Reversa -> ");
	i = 0;
	while (i < size)
	{
		printf("%d", a[i]);
		i++;
	}
	printf("\n");  
	return (0);
}