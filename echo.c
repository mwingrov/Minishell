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

int		echo(char **av)
{
	int	j;

	j = 0;
	while (av[j] != '\0')
	{
		if (ft_strrchr(av[j], 34))
		{
			echo_q(av[j]);
			return (0);
		}
		if (ft_strchr(av[j], '*'))
		{
			ft_putendl(ft_strjoin("zsh: no matches found:", av[j]));
			return(0);
		}
		ft_putstr(av[j++]);
		ft_putchar(' ');
	}
	ft_putstr("\n");
	return (0);
}

void	ft_printecho(char *str)
{
	int		i;

	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] == 34)
			i++;
		else
			ft_putchar(str[i]);
	}
	ft_putendl("");
}

void	ft_loop_quote(char *str)
{
	char	**array[2048];
	int		i;
	char	*c;

	i = 1;
	array[0] = &str;
	while (1)
	{
		if (get_next_line(0, &c) != '\0')
			break ;
		if (ft_strstr(c, "\""))
		{
			ft_putstr(**array);
			break ;
		}
		else
		{
			array[i] = &c;
			ft_strdel(&c);
			i++;
		}
	}
}

void	ft_open_dquote(char *str)
{
	int		i;
	int		n;
	char	*tmp;

	n = 0;
	i = 5;
	while (str[n])
		n++;
	tmp = (char *)malloc(sizeof(char) * (n + 1));
	n = 0;
	while (str[i])
	{
		tmp[n] = str[i];
		n++;
		i++;
	}
	ft_loop_quote(tmp);
}

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int		echo_q(char *str)
{
	int		qcount;
	int		i;

	i = -1;
	if (strchr(str, 34))
		ft_printecho(str);
	else
	{
		while (str[++i])
			qcount = (str[i] == 34) ? qcount++ : qcount;
		i = ft_is_even(qcount);
		if (i == 1)
			ft_printecho(str);
		else
			ft_open_dquote(str);
	}
	return (0);
}