/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:57:33 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/18 12:59:12 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int			read_line(char **args, int num_args)
{
	char	*line;

	if (get_next_line(0, &line) == 1)
	{
		if (num_args > 0)
		{
			args = ft_strsplit(line, ' ');
			check_input(args);
		}
		free(args);
	}
	return (1);
}
