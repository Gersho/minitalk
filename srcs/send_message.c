/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_message.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:26:00 by kzennoun          #+#    #+#             */
/*   Updated: 2021/06/06 13:03:27 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void send_message(char *str)
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
             //send 1
           }
           else 
           {
               //send 0
           }
           j++;
       } 
        i++;
    }
}