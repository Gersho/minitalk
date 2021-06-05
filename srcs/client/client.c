/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:35:38 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/05 18:49:32 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"



int main(int argc, char **argv)
{
	int pid;

	if(argc != 3)
		argerror_exit();

	pid = get_pid(argv[1]);

printf("pid:%d\n", pid);
exit(0);

}