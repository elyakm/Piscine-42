/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:12:07 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/05 11:29:19 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	return(s1);
}

int main(void)
{
	char s1[] = "destination";
	char s2[] = "source";
	
	printf("%s\n", s1);
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
}
