/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:38:43 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/02 11:47:50 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count])
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

int	main(int argc, char **argv)
{
	int		count;
	char	*temp;

	count = 1;
	if (argc == 1)
		return (0);
	while (count != (argc - 1))
	{
		if (ft_strcmp(argv[count], argv[count + 1]) > 0)
		{
			temp = argv[count];
			argv[count] = argv[count + 1];
			argv[count + 1] = temp;
			count = 0;
		}
		count++;
	}
	count = 1;
	while (count != argc)
	{
		ft_putstr(argv[count]);
		write(1, "\n", 1);
		count++;
	}
}
