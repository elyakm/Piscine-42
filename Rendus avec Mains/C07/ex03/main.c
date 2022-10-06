/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:29:15 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/03 14:56:11 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char *strings [3]= {"sushi", "pizza", "milkshake"};
    char *joined_string;
    joined_string = ft_strjoin(3, strings, ", ");
    printf("%s\n", joined_string);
    return (0);
}