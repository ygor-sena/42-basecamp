#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
   char str1[100] = "Tes-ta ";
   char str2[] = "-ando!";
   char str3[100] = "Tes-ta ";
   char str4[] = "-ando!";
   int parameter = 20;

   ft_strncat(str1, str2, parameter);
   strncat(str3, str4, parameter);
   printf("ft_strcat: %s\n", str1);
   printf("ft_strcat: %s\n", str2);
   printf("cc_strcat: %s\n", str3);
   printf("cc_strcat: %s\n", str4);
   return (0);
}