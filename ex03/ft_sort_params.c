/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:59:02 by caidel            #+#    #+#             */
/*   Updated: 2020/07/14 17:46:18 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char *argv[])
{
	int j;
	int i;
	char *swap;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < (argc - i))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0) 
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
			}
			j++;
		}
		i++;
	}

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
