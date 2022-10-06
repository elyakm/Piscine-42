/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:46:16 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/30 11:54:58 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int counter;
	
	counter = 0;
	if(argc == 2)
	{
		while(argv[1][counter] && (argv[1][counter] == ' ' || argv[1][counter] == '\t'))
			counter++;
		while(argv[1][counter] && (argv[1][counter] != ' ' || argv[1][counter] != '\t'))
			{
				ft_putchar(argv[1][counter]);
				counter++;
			}
	}
		ft_putchar('\n');
		return(0);
}


