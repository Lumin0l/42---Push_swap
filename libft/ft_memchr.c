/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:58:41 by marvin            #+#    #+#             */
/*   Updated: 2022/12/07 13:58:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p_s;
	size_t			index;

	p_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (p_s[index] == (unsigned char) c)
		{
			return (&p_s[index]);
		}
		else
			index++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char *src = "/|\x12\xff\x09\x42\2002\42|\\";
        int size = 10;
 
        if (memchr(src, '\200', size) == ft_memchr(src, '\200', size))
                printf("TEST_SUCCESS");
        printf("TEST_FAILED");
 
}
*/