#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	origem[] = "012345678901234567890123456789";
	char	destino[30];

	printf("Before:\nDestination: %s\nOrigin: %s\n",
		destino, origem);
	ft_strcpy(destino, origem);
	//strcpy(destino, origem);
	printf("Before:\nDestination: %s\nOrigin: %s\n",
		destino, origem);
}
