/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:20:56 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/20 14:36:54 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char			*str;
	unsigned int	i;

	str = s;
	i = 0;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}
