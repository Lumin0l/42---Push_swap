/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:47:17 by marvin            #+#    #+#             */
/*   Updated: 2022/12/07 17:47:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	jindex;

	if (!*needle || len < 0)
		return ((char *)haystack);
	index = 0;
	while (haystack[index] != '\0')
	{
		jindex = 0;
		while (haystack[index] != '\0' && haystack[index] == needle[jindex]
			&& index < len)
		{
			index++;
			jindex++;
		}
		if (needle[jindex] == '\0')
			return ((char *)&haystack[index - jindex]);
		index = (index - jindex) + 1;
	}
	return (NULL);
}
