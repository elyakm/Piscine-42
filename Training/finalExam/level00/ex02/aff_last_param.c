/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:53:49 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/05 10:55:24 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	count;

	count = 0;
	
	if (argc > 2)
	{
		while (argv[argc - 1][count])
		{
			ft_putchar(argv[argc - 1][count]);
			count++;
		}
	}
	ft_putchar('\n');
}