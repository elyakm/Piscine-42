/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:09:57 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/04 16:17:45 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
    int count;
    count = 0;
    while (str[count] != '\0')
        count++;
    return (count);
}
char    *ft_strcpy(char *dest, char *src)
{
    int count;
    count = 0;
    while (src[count] != '\0')
    {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return (dest);
}
char    *ft_strdup(char *src)
{
    char    *dest;
    dest = malloc(ft_strlen(src) + 1 * sizeof(char));
    if (!dest)
        return (NULL);
    ft_strcpy(dest, src);
    return (dest);
}
