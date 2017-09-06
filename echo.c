/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:27:56 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/06 18:41:22 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*echo(char **av)
{
	int	i;

	i = 0;
	while (av[0][i])
	{
		if (av[0][i] == '*')
		{
			ft_putendl(ft_strjoin("zsh: no matches found: ", &av[0][i++]));
			ft_putchar(av[0][i++]);
		}
		ft_putchar(av[0][i++]);
	}
	ft_putstr("\n");
	return (*av);
}
