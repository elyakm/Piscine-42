#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    int i;
    i = 0;
    char test1[] = "g,tgg";
    char test2[] = "gggg";
    printf("%d\n", ft_strcmp(test1, test2));
}

// la fonction va return la soustraction de la premiere difference qu,elle trouve
// c - g // elle continue pas vers les autres erreurs