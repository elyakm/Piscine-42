#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int r;
	int k;
	int division;
	int modulo;

	r = 20;
	k = 5;
	ft_div_mod(r, k, &division, &modulo);
	printf("r est = %d\n k est :%d\n division de r et k est :%d\n modulo de r et k est :%d\n", r, k, division, modulo);

}



