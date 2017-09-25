/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:01:58 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/21 18:04:26 by mwingrov         ###   ########.fr       */
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
# include <stdio.h>
# include <sys/wait.h>
# include "b_func.h"

typedef int t_bool;

typedef struct  b_func
{
	int			ft_exit;
	int			ft_echo;
	int			ft_help;
	int			ft_setenv;
	int			ft_cd;
}				b_funct;

void			check_input(char **agrs);
int				read_line(char **argsm, int num_args);
int				ft_echo(char **av);
void			ft_loop_quote(char *str);
void			ft_open_dquote(char *str);
int				echo_q(char *str);
void			ft_printecho(char *str);
t_bool			ft_is_even(int nbr);
int				ft_exit(char **args);
int				ft_launch(char **args);
int     		ft_help(char **args);
int				ft_cd(char **args);
int				ft_num_b(void);
int				ft_execute(char **arg);
char			*b_str[];
int     		(*b_func[]) (char **) = {&ft_cd, &ft_echo, &ft_setenv, 
				&ft_exit, &ft_help};

#endif
