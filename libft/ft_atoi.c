/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:34:06 by marvin            #+#    #+#             */
/*   Updated: 2022/12/07 17:34:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	index;
	int	negative;

	negative = 1;
	number = 0;
	index = 0;
	while (nptr[index] == ' ' || nptr[index] == '\t' || nptr[index] == '\n'
		|| nptr[index] == '\v' || nptr[index] == '\f' || nptr[index] == '\r')
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			negative *= -1;
		index++;
	}
	while (nptr[index] != '\0' && ft_isdigit(nptr[index]))
	{
		number = number * 10 + (nptr[index] - '0');
		index++;
	}
	return (number * negative);
}

/*
int	main(void)
{
	const char *nptr1 = "12974";
	const char *nptr2 = "+12974";
	const char *nptr3 = "-12974";
	const char *nptr4 = "129a74";
	const char *nptr5 = "   12974";

	printf("int1 = %d\n", ft_atoi(nptr1));
	printf("int2 = %d\n", ft_atoi(nptr2));
	printf("int3 = %d\n", ft_atoi(nptr3));
	printf("int4 = %d\n", ft_atoi(nptr4));
	printf("int5 = %d\n", ft_atoi(nptr5));
	return (0);
}
*/