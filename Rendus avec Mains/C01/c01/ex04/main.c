#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int r;
	int k;


	r = 200;
	k = 185;

	ft_ultimate_div_mod(&r, &k);
	printf("r = %d\n k = %d\n", r, k);
}
