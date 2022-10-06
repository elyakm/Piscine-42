/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:19:56 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/06 15:26:01 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}


char    *rev_print(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int main (void)
{
	char str[] = "test";
	rev_print(str);
	write(1, &str, 1);
}