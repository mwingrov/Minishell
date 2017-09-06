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

# include "Libft/libft/libft.h"
# include "get_next_line.h"

void	check_input(char **agrs);
void	read_line(char **argsm, int num_args);
char	*echo(char **av);

#endif
