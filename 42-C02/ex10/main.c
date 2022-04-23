#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			check_ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			test_src[] = "Teste Todos, Elvin";
	char			test_dest[19];

	check_ft_strlcpy (test_dest, test_src, 19);
	check_ft_strlcpy (test_dest, test_src, 10);
	check_ft_strlcpy (test_dest, test_src, 1);
	check_ft_strlcpy (test_dest, test_src, 0);
}

void	check_ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;

	length = 0;
	printf("Before Source: %s\n", src);
	printf("Before Destiny: %s\n", dest);
	length = ft_strlcpy(dest, src, size);
	printf("Source length: %d\n", length);
	printf("After Source: %s\n", src);
	printf("After Destiny: %s\n\n", dest);
}
