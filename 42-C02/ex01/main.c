#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
    char src[51] = "abcdefghij";
    char dest[51] = "0123456789";
	char src2[51] = "abcdefghij";
	char dest2[51] = "0123456789";
	int i;

	i = 3;
    printf("Source: %s\n", src);
	printf("Dest: %s\n\n", src);
    ft_strncpy(dest, src, i);
	printf("ft_strncpy: %s\n", dest);
    strncpy(dest2, src2, i);
    printf("cc_strncpy: %s\n", dest2);
}
