/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:19:11 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/30 10:33:47 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 0;
	
	if(argc > 2)
	{
	while(argv[argc-1][counter] != '\0')
		{
			{
			write(1, &argv[argc-1][counter], 1);
			counter++;
			}
		}
	}
	write(1, "\n", 1);
}