/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:06:48 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/30 12:18:08 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2) //s1 = src   s2 = dest
{
	int i;
	
	i = 0;
	while(s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return(s2);
}

int main(void)
{	
	char src[] = "source";
	char dest[] = "destination";
	printf("%s\n", dest);
	ft_strcpy(src, dest);
	printf("%s\n", dest);
}