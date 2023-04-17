/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:49:40 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/05 13:32:00 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	index;
	char			*str;

	index = (ft_strlen(s));
	if ((char)c == '\0')
		return ((char *) &s[index]);
	str = (char *)s + index - 1;
	while (index > 0)
	{
		if (*str == (char)c)
			return (str);
		str--;
		index--;
	}
	return (NULL);
}
