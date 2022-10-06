#include <stdio.h>

int	ft_str_is_printable(char *str);
int	main(void)
{
	char truc[] = {"13"};
	printf("%d\n", ft_str_is_printable(truc));
}