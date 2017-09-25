/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:41:08 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/19 14:49:03 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		ft_cd(char **args);
{
	if (args[i] == NULL)
		fprintf(fd, "lsh: expected argument to \"cd\"\n");
	else
	{
		if (chdir(args[1] != 0))
		{
			perror("lsh");
		}
	}
	return (1);
}
