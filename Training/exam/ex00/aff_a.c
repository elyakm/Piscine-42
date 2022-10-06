/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:31:31 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/30 10:05:43 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int counter;
	
	counter = 0;
	if(argc != 2)
	
		write(1, "a", 1);
	else
	{
		while(argv[1][counter] != '\0')
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