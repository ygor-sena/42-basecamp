#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char s1[] = "this is ";
    char s2[] = "a potentially long string";
    int total_length;
    unsigned int size = 30;
    char buffer[size];

    strcpy(buffer, s1);
    total_length = ft_strlcat(buffer, s2, size);
    printf("s1 content: %s\n", buffer);
    printf("s1 + s2 length: %d\n", total_length);
    return(0);
}