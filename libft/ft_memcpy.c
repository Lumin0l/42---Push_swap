/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:36:51 by marvin            #+#    #+#             */
/*   Updated: 2022/12/01 13:36:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dest;

	if (dest > 0 || src > 0)
	{
		p_src = (unsigned char *)src;
		p_dest = (unsigned char *)dest;
		while (n > 0)
		{
			*p_dest = *p_src;
			p_src++;
			p_dest++;
			n--;
		}
	}
	return (dest);
}
