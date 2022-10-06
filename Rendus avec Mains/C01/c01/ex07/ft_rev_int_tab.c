/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:14:24 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/25 16:26:00 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int ri;
	int	swap;

	i = 0;
	ri = (size - 1);
	while(i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}

int	main(void)
{
	int	array[4] = {1, 9, 3, 4};
	ft_rev_int_tab(array, 4);
	int i = 0;
	while(i < 4)
	{
		printf("%d", array[i]);
		i++;
	}
}
