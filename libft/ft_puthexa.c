/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:41:56 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/12/05 11:55:18 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa(char c, unsigned int n)
{
	unsigned int	counter;

	counter = 1;
	if (c == 'x')
	{
		if (n >= 16)
			counter = counter + ft_puthexa(c, n / 16);
		ft_putchar("0123456789abcdef"[n % 16]);
	}
	else if (c == 'X')
	{
		if (n >= 16)
			counter = counter + ft_puthexa(c, n / 16);
		ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (counter);
}
