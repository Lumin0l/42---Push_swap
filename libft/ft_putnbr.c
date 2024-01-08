/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:37:01 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/12/05 11:55:32 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	unsigned int	num;
	unsigned int	counter;

	num = 0;
	counter = 1;
	if (n < 0)
	{
		num = n * -1;
		ft_putchar('-');
		counter++;
	}
	else
		num = n;
	if (num > 9)
	{
		counter = counter + ft_putnbr((num / 10));
	}
	ft_putchar((num % 10) + '0');
	return (counter);
}
