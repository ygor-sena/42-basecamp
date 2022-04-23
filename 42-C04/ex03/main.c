#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int main(void)
{
    char string[] = "YGOR DE GOES SENA";
    char *str = &string[0];

	ft_putstr(str);
    return (0);
}