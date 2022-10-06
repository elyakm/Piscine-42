#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char    source[] = "and that";
    char    destination[] = "this";
    printf("%s\n", destination);
    printf("%s\n", ft_strcat(destination, source));
    
}