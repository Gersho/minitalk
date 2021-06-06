/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_message.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:01:26 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/06 15:54:27 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void get_message(int sig)
{
	static char	c;
	static char *str;
	char *tmp;
	static int	i;

	printf("----------\n");


	if (sig == SIGUSR1)
		printf("get SIGUSR1 (1)\n");
	if (sig == SIGUSR2)
		printf("get SIGUSR2 (0)\n");




	if (!str)
	{
		str = malloc(sizeof(char *));
		if (!str)
			error_exit(-1);
		str[0] = '\0';
	}
	if (sig == SIGUSR1)
		c |= 128 / ft_power(2, i);


	printf("current c:%c\n", c);
	printf("current (int)c:%d\n", (int)c);
	printf("i:%d\n", i);


	
	i++;
	if (i == 8)
	{
		i = 0;
		if (c == '\0')
			ft_putstr_fd(str, 1);
		else
		{
			tmp = ft_straddchar(str, c);
			if (!tmp)
			{
				free(str);
				error_exit(-1);
			}
			free(str);
			str = tmp;
		}
		c = '\0';
	}
}