/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:41:58 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/04 10:55:13 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	result;

	result = 2;
	if (nb < 2)
		return (0);
	while (result <= nb / result)
	{
		if (nb % result == 0)
			return (0);
		result++;
	}
	return (1);
}
