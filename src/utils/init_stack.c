/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanol <imanol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:56 by imanol            #+#    #+#             */
/*   Updated: 2024/01/09 13:18:28 by imanol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static long ft_atol(const char *str)
{
	long result;
	int sign;
	int index;

	result = 0;
	sign = 1;
	index = 0;
	while (str[index] && (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
						  str[index] == '\r' || str[index] == '\v' || str[index] == '\f'))
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * sign);
}

/*
 * Create the stack with the command line values
 * Checks are embedded in the creation itslef
 * 		~Duplicate values
 * 		~Over|Underflow
 * 		~Syntax errors
 *
 * 	🏁 Flag is useful cause if true, i have the argv in the HEAP to free
 *
 */

