/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:27:51 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/03 20:05:47 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	count;

	count = 1;
	n = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while(count <= nb)
	{
		n = count * n;
		count++;
	}
	return (n);
}
