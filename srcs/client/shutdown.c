/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shutdown.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:34:50 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/05 18:48:41 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

void	piderror_exit(void)
{
	write(1, "Error: Invalid PID\n", 19);
	exit(-1);
}

void	argerror_exit(void)
{
	write(1, "Error: Invalid argument(s)\n", 28);
	exit(-1);
}

void	error_exit(int err)
{
	perror("Error");
	exit(err);
}