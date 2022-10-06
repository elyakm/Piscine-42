#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	main(void)
{
	char des[] = {"destination"};
	char src[] = {"source"};
	printf("%s\n", des);
	ft_strncpy(des, src, 15);
	printf("%s\n", des);
}
