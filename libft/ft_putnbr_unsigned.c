/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:40:51 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/12/05 11:55:36 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	counter;

	counter = 1;
	if (n > 9)
	{
		counter = counter + ft_putnbr((n / 10));
	}
	ft_putchar((n % 10) + '0');
	return (counter);
}
