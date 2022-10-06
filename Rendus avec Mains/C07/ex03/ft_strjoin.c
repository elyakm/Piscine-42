/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:22:38 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/04 15:16:03 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(src);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	count;
	int	len;

	count = 0;
	len = 0;
	while (count < size)
	{
		len += ft_strlen(strs[count]);
		count++;
	}
	len += (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	i = 0;
	if (size == 0)
	{
		tab = malloc(sizeof(NULL));
		tab = 0;
		return (tab);
	}
	tab = (char *)malloc(sizeof(char) * ft_strslen(size, strs, sep) + 1);
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i > size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
