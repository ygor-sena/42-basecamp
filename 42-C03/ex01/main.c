#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[] = "-bcd", str2[] = "asdfas", str3[] = "~123413d";
	int result;

	result = strcmp(str1, str2);
	printf("cc_strcmp(str1, str2) = %d\n", result);
	result = strcmp(str1, str3);
	printf("cc_strcmp(str1, str3) = %d\n", result);
	result = ft_strcmp(str1, str2);
	printf("ft_strcmp(str1, str2) = %d\n", result);
	result = ft_strcmp(str1, str3);
	printf("ft_strcmp(str1, str3) = %d\n", result);
	return (0);
}