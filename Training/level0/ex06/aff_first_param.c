/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:54:46 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/29 17:32:50 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int counter;
	int i;
	
	counter = 0;
	i = argc - 1;
	// if(argc < 2)
	// {
	// 	write(1, "\n", 1);
	// }
	if (argc >= 2)
	{
		while(argv[i][counter] != '\0')
		{
			write(1, &argv[i][counter], 1);
			counter++;
		}
	}
	write(1, "\n", 1);
} 