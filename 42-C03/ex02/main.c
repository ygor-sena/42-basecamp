#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[] = "a", str2[] = "c", str3[] = "abcd";
	int result;
	unsigned int parameter = 5;

	result = strncmp(str1, str2, parameter);
	printf("cc_strncmp(str1, str2) = %d\n", result);
	result = strncmp(str1, str3, parameter);
	printf("cc_strncmp(str1, str3) = %d\n", result);
	result = ft_strncmp(str1, str2, parameter);
	printf("ft_strncmp(str1, str2) = %d\n", result);
	result = ft_strncmp(str1, str3, parameter);
	printf("ft_strncmp(str1, str3) = %d\n", result);
	return (0);
}
