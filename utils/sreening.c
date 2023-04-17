/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sreening.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:26:55 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/04/17 16:40:57 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/push_swap.h"

/*
Quiero mirar si:
	- Los argumentos vienen dentro de un " " y hacer split.
	- Los argumentos vienen mezclados entre chars y str: push_swap 8 2 "1 9 6".
	- Los argumentos son erroneos (no son numeric).
	- Los argumentos tienen símbolos redundantes: -0 o +0.
	- Los argumentos están repetidos: push_swap 5 9 6 6 4 7.
	- Los números introducidos no están contmplados dentro del rango de int.
*/

void	ft_check_args(int argc, char **argv)
{
	int		index;
	long	temp_number;
	
}