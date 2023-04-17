/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:42:19 by marvin            #+#    #+#             */
/*   Updated: 2022/12/08 13:42:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memcpy(ptr, s, ft_strlen(s) + 1);
	return (ptr);
}
