/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:35:46 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/06 12:13:25 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int	main(void)
{
	int	count;
	
	count = 1;
	while(count <= 100)
	{
		if(count % 3 == 0 && count % 5 == 0)
		{
			ft_putstr("fizzbuzz");
			ft_putchar('\n');
		}
		
		else if (count % 3 == 0)
		{
			ft_putstr("fizz");
			ft_putchar('\n');
		}
		
		else if (count % 5 == 0)
		{
			ft_putstr("buzz");
			ft_putchar('\n');
		}
		
		else
		{
			ft_putnbr(count);
			ft_putchar('\n');
		}
		count++;
	}
}