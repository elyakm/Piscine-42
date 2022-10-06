/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testgit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:32:07 by jalevesq          #+#    #+#             */
/*   Updated: 2022/09/18 20:16:53 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	h;

	h = 1;
	while (h <= y && x > 0)
	{
		l = 1;
		while (l <= x)
		{
			if ((l == 1 && h == 1) || (l == x && h == y))
				ft_putchar('/');
			else if ((l == x && h == 1) || (l == 1 && h == y))
				ft_putchar('\\');
			else if ((l == 1) || (l == x) || (h == 1) || (h == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		h++;
	}
}
