/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:28:08 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/06 17:14:16 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(void)
{
	int	pid;

	signal(SIGUSR1, get_message);
	signal(SIGUSR2, get_message);
	pid = getpid();
	write(1, "PID:",4);
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	while (1)
		continue;
}
