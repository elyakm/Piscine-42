#include <stdio.h>
char	*ft_strcpy(char *dest, char	*src);

int main(void)
{
	char MDR[] = {"MDRRR"};
	char LOL[] = {"LOL"};
	printf("%s\n", MDR);
	ft_strcpy(MDR, LOL);
	printf("%s\n", MDR);
}
