/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_loop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:54:51 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/20 07:23:43 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void		chack_input(void)
{
	int		stat;
	char	**args;
	char	*line;

	while (stat)
	{
		ft_putstr("$>");
		line = read_line();
	}

}
