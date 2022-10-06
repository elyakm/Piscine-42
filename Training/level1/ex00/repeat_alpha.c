/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:06:28 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/05 12:03:58 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int counter;
	char str;
	int nbrep;
	
	counter = 0;
	while (argv[1][counter] != '\0')
	{
		nbrep = (argv[1][counter] - 'a') + 1;
		while(nbrep != 0)
		{
			write(1, &argv[1][counter], 1);
			nbrep--;	
		}
		counter++;
	}
	write(1, "\n", 1);
}
