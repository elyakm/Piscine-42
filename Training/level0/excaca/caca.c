/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caca.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:28:02 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/29 14:57:16 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int a;
	
	a = 0;
	i = argc;
	while(argv[1][a] != '\0')
	{
		write(1, &argv[1][a], 1);
		a++;
	}
	write(1, "\n", 1);
	return(0);
}