/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:07:48 by mwingrov          #+#    #+#             */
/*   Updated: 2017/09/19 14:04:47 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		ft_launch(char **args)
{
	pid_t	pid, wpid;
	int		status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("lsh");
		}
		exit(EXIT_FAILURE);
		else if (pid < 0)
		{
			perror("lsh");
		}
		else
		{
			do
			{
				wpid = waitpid(pid, &status, WUNTRACED);
				while (!WIFEXITED(status) && !WIFSIGNALED(status));
			}
		}
	}
	return (1);
}
