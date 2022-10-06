/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:45:21 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/05 09:53:29 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int count; // pour compter le nombre de character dans le parametre
	
	count = 0;

	if(argc != 2)
	{
		write(1, "a", 1);
	}
	else
	{
		while(argv[1][count] != '\0')
		{
			if(argv[1][count] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			count++;
		}
	}
	write(1, "\n", 1);
	return(0);
}