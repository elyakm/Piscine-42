#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
char	str[] = "S alut, comment h tu vas ? 42mots qurante-deux; cinquante+et+un";
printf("%s\n", str);
ft_strcapitalize(str);
printf("%s\n", str);
}