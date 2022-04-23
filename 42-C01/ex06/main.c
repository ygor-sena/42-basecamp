#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	string[] = "PARTIU 42";
	int		length;
	char	*str = &string[0];

	length = ft_strlen(str);
	printf("String length: %d\n", length);
	return (0);
}
