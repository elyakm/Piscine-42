#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int main(void)
{
    char    dest[] = "destination";
    char    src[] = "source";
    char    dest1[] = "destinatiooooon";
    char    src1 [] = "source1";
    printf("%s\n", dest);
    ft_strlcpy(dest, src, 15);
    printf("%s\n", dest);
    strlcpy(dest1, src1, 15);
    printf("%s\n", dest1);
}