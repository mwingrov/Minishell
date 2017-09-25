/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:54:50 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/19 14:04:53 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		ft_execute(char **args)
{
	int	i;

	i = 0;
	if (args[0] == NULL)
		return (1);
	else
	{
		while (i++ < ft_num_b())
		{
			if (ft_strcmp(args[0], b_str[i]) == 0)
			{
				return ((*b_func[i](args)));
			}
		}
	}
	return (ft_launch(args));
}
