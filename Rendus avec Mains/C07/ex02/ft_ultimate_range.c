/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:04:08 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/04 16:45:41 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof (int));
	if (!*range)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

int	main(void)
{
	int	min = 1;
	int	max = 9;
	int	compteur;
	int	*array[0];
	
	ft_ultimate_range(array, min, max);
	compteur = 0;
	while (compteur < (max - min))
	{
		printf("%d", array[0][compteur]);
		compteur++;
	}
}
