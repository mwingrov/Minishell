/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_func.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:16:16 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/21 18:08:12 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_FUNC_H
# define B_FUNC_H

# include "minishell.h"

b_funct	*c;
b_funct	*e;
b_funct	*s;
b_funct	*ex;
b_funct	*h;
char	*b_str[] = {"ft_cd", "ft_echo", "ft_setenv", "ft_exit", "ft_help"};
int		(*b_func[]) (char **) = {&c->ft_cd, &e->ft_echo, &s->ft_setenv, 
	&ex->ft_exit, &h->ft_help};

int		ft_num_b(void)
{
	return (sizeof(b_str) / sizeof(char *));
}

#endif
