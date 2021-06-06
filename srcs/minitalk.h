/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:38:44 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/06 13:07:27 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>

int		ft_power(int nb, int power);
int		get_pid(char *arg);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	piderror_exit(void);
void	error_exit(int err);
void	argerror_exit(void);
void	send_message(char *str);
#endif

/*

write

◦signal
◦sigemptyset
◦sigaddset
◦sigaction

◦kill
◦getpid

◦malloc
◦free

◦pause
◦sleep
◦usleep
◦exit 

*/