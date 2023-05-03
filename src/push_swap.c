/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:09:56 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/05/03 13:03:58 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./library/push_swap.h"

static char	**ft_join_args(char ** argv)
{
	unsigned int	i;
	char			*temp;
	char			**args;

	i = 1;
	temp = NULL;
	args = NULL;
	while (argv[i] != '\0')
	{
		temp = ft_strjoin(temp, argv[i]);
		temp = ft_strjoin(temp, ' ');
		i++;
	}
	args = ft_split(temp, ' ');
	free(temp);
	return (args);
}

int	main(int argc, char **argv)
{
	char **args;
	
	if (argc < 2)
		return (-1);
	
	args = NULL;
	args = ft_join_args(argv);
	ft_check_args(args);
	
	return (0);
}