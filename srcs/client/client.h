/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:38:30 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/05 18:48:47 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
#define CLIENT_H

#include "../shared/minitalk.h"


int get_pid(char *arg);
int ft_atoi(const char *str);
char *ft_itoa(int n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void	piderror_exit(void);
void	error_exit(int err);
void	argerror_exit(void);

#endif