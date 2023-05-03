/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sreening.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:26:55 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/05/03 13:01:59 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/push_swap.h"

static void	ft_error(char *message)
{
	ft_putendl_fd(message, 1);
	exit (0);
}

static int	ft_repeated_num(int n, char **args, int i)
{
	++i;
	while (args[i])
	{
		if (ft_atoi(args[i]) == n)
			return (1);
		i++;		
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (1);
		i++;
	}
	return (0);
}

void	ft_check_args(char **args)
{
	int		i;
	char	*args;
	long	temp_number;

	i = 0;
	while (args[i] != '\0')
	{
		temp_number = ft_atoi(args[i]);
		if (temp_number < -2147483648 || temp_number > 2147483647)
			ft_error("Error\n");
		if (ft_repeated_num(temp_number, args, i) == 1)
			ft_error("Error\n");
		if (ft_isnum(temp_number) == 1)
			ft_error("Error\n");
	}
}