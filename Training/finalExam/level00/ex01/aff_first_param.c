/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:05:52 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/05 10:55:36 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int count;
	
	count = 0;
	if(argc == 2)
	{
		while(argv[1][count] != '\0')
		{
			ft_putchar(argv[1][count]);
			count++;
		}
	}
	write(1, "\n", 1);
}
