/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_message.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:26:00 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/06 18:06:04 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void send_message(char *str, int pid)
{
	int i;
	int j;

	i = 0;

	while(str[i])
	{
	   j = 0;
	   while(j < 8)
	   {
		   if (str[i] & 128 / ft_power(2,j))
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
		i++;
	}
	j = 0;
	while (j < 8)
	{
		if (kill(pid, SIGUSR2) == -1)
			error_exit(-1);
		usleep(100);
		j++;
	}
}