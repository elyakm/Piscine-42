#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char    test1[] = "Test wesh";
    char    test2[] = "Ttst resh";
	
	printf("%d\n", ft_strncmp(test1, test2, 10));
}