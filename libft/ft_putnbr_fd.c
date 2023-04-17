/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Uft_putnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:22:14 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/20 16:31:45 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	num = 0;
	if (n < 0)
	{
		num = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		num = n;
	if (num >= 10)
	{
		ft_putnbr_fd((num / 10), fd);
	}
	ft_putchar_fd((num % 10) + '0', fd);
}
