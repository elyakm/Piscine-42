/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:42:42 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/29 08:55:05 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
if (nb >= 10)
{
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
else
{
	ft_putchar(nb + 48);
}
}

void	ft_print_verif(int comb)
{
if (comb < 10)
{
	ft_putnbr(0);
	ft_putnbr(comb);
}
else
{
	ft_putnbr(comb);
}
}

void	ft_loop(int comb_a, int comb_b)
{
while (comb_a <= 98)
{
comb_b = comb_a + 1;
	while (comb_b <= 99)
	{
		ft_print_verif(comb_a);
		ft_putchar(' ');
		ft_print_verif(comb_b);
		if (comb_a == 98 && comb_b == 99)
		{
			break ;
		}
		ft_putchar(',');
		ft_putchar(' ');
		comb_b++;
	}
comb_a++;
}
}	

void	ft_print_comb2(void)
{
int	comb_a;
int	comb_b;

comb_a = 0;
comb_b = 0;
ft_loop(comb_a, comb_b);
}
