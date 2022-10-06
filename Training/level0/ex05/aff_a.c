/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:02:50 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/29 16:36:09 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int counter;
	
	counter = 0;
	if(argc != 2) // 2 parceque le ./a.out est compté comme 1er paramétre
	{
		write(1, "a", 2);
	}
	else if(argc == 2)
	{
		while (argv[1][counter] != '\0')
		{
			if(argv[1][counter] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			counter++;
		}
	}
	write(1, "\n", 1);
}