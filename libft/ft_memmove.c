/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:41:46 by marvin            #+#    #+#             */
/*   Updated: 2022/12/01 16:41:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		index;

	d = (char *) dest;
	s = (const char *) src;
	if (d > s)
	{
		index = n;
		while (index-- > 0)
			d[index] = s[index];
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
