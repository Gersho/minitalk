/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:14:15 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/06 13:05:42 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	get_pid(char *arg)
{
	int		value;
	char	*ptr;

	value = ft_atoi(arg);
	ptr = ft_itoa(value);
	if (!ptr)
		error_exit(-1);
	if (ft_strncmp(ptr, arg, 50) != 0 || value > 4194304)
	{
		free(ptr);
		piderror_exit();
	}
	free(ptr);
	return (value);
}
