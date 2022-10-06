/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:07:31 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/04 10:38:53 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	while (count < nb / count)
		count++;
	if (count * count == nb)
		return (count);
	return (0);
}

int main(void)
{
	int	count;
	
	count = 8;
	printf("%d\n", ft_sqrt(count));
}