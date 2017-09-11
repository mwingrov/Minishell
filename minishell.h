/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:01:58 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/06 18:38:53 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# define ABS(Value) (Value < 0) ? Value * -1 : Value
# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN(x)(!((x) % 2))

# include "Libft/libft/libft.h"
# include "get_next_line.h"

typedef int t_bool;

void        check_input(char **agrs);
void	    read_line(char **argsm, int num_args);
int 	    echo(char **av);
void        ft_loop_quote(char *str);
void	    ft_open_dquote(char *str);
int		    echo_q(char *str);
void	    ft_printecho(char *str);
t_bool      ft_is_even(int nbr);

#endif
