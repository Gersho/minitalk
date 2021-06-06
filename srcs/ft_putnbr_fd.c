/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:54:51 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/06 15:27:30 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long int	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		write(fd, "-", 1);
		long_nb *= -1;
	}
	if (long_nb >= 10)
	{
		ft_putnbr_fd(long_nb / 10, fd);
		ft_putnbr_fd(long_nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(('0' + long_nb), fd);
	}
}
