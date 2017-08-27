/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:27:56 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/17 17:49:35 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "minishell.h"

void	ft_putstr(const char *str)
{
	while(*str && write(1, str++, 1));
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			if (av[1][i] == '*')
			{
				ft_putendl(ft_strjoin("zsh: no matches found: ", &av[1][i]));
				ft_putstr(av[i++]);
			}
			ft_putstr(av[i++]);
			ft_putstr(" ");
		}
		ft_putstr("\n");
	}
	return (0);
}
