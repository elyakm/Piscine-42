#include <string.h>
#include <stdio.h>

 char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char    source[] = "and that";
    char    destination[] = "this";
    printf("%s\n", destination);
    printf("%s\n", ft_strncat(destination, source, 5));
}