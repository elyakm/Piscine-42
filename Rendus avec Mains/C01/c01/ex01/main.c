/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:24:37 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/25 16:16:03 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********ptr9);

int	main()
{
	int	nbr;
	int	*ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int ********ptr8;
	
	nbr = 15;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;

	ft_ultimate_ft(&ptr8);
	printf("%d", ********ptr8);
}

