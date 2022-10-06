/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:27:47 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/04 16:19:25 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src);

int	main(void)
{
	char	source[] = "René, je vais te tuer.";

	printf("%s\n", ft_strdup(source));
	printf("%s\n", ft_strdup(source));
}