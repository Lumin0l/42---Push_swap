/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanol <imanol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:09:56 by ide-la-i          #+#    #+#             */
/*   Updated: 2024/01/08 18:17:03 by imanol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node *a;
	t_stack_node *b;

	a = NULL;
	b = NULL;

	if (argc < 2 || (argc >= 2 && !argv[1][0]))
		return ("error"); // FIXME: make function that returns proper errors.
	else if (argc == 2)
		argv = ft_split(argv[1], ' '); // FIXME: maybe needs a new split.
	init_stack_a(&a, argv + 1); // TODO:
	if (!stack_sorted(a)) // TODO:
	{
		if (stack_len(a) == 2) // TODO:
			sa(&a, false); // TODO:
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	return(0);
}