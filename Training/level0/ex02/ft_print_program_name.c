/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:04:02 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/29 10:30:29 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
	write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if(argc != 1)
	{
		return (0);
	}
	else
	{
		ft_putstr(argv[0]);
		write(1, "\n", 1);
	}
	return(0);
}