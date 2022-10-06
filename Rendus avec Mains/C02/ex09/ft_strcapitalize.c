/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:28:32 by klaksi            #+#    #+#             */
/*   Updated: 2022/09/26 15:55:15 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] -= 32;
		i++;
	}
	return (str);
}
