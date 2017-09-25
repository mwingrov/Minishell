/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:11:50 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/19 14:37:45 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minihsell.h"

int		ft_help(char **args)
{
	void(args)
	int	i;

	i = 0;
	ft_putendl("Stephen Brennan's LSH");
	ft_putendl("Type program names and arguments, and hit enter.");
	ft_putendl("The following are built in");
	while (i++ < ft_num_b())
	{
		ft_putendl(*b_str[i]);
	}
	ft_putendl("Use the man command for information on other programs.");
	return (1);
}
