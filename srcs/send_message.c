/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_message.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:26:00 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/07 12:55:04 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_char(char c, int pid)
{
	int	j;

	j = 0;
	while (j < 8)
	{
		if (c & 128 / ft_power(2, j))
		{
			if (kill(pid, SIGUSR1) == -1)
				error_exit(-1);
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				error_exit(-1);
		}
		usleep(100);
		j++;
	}
}

void	send_message(char *str, int pid)
{
	int	i;

	i = 0;
	while (str[i])
	{
		send_char(str[i], pid);
		i++;
	}
	send_char('\0', pid);
}
