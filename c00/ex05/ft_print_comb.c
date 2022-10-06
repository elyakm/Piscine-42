/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:31:01 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/18 13:09:00 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	ft_tri_digits(char first_digit, char second_digit, char third_digit)
{
	ft_putchar(first_digit);
	ft_putchar(second_digit);
	ft_putchar(third_digit);
}

void	ft_loop(char a, char b, char c)
{
	while (a <= 55)
	{	
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{	
				ft_tri_digits(a, b, c);
				if (a == 55 && b == 56 && c == 57)
				{	
					break ;
				}
				write(1, ", ", 2);
				c++;
			}
				b++;
		}
	a++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 0;
	c = 0;
	ft_loop(a, b, c);
}
