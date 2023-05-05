/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:09:56 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/05/05 18:01:11 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./library/push_swap.h"

/* 
Limpiar el imput: ok
Crear stacks (el tren)
Crear las funciones para las acciones
Aplicar el algoritmo
*/

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

// This will populate the stack_a
static void ft_init_stack(t_stack **stack, char **args)
{
	unsigned int	i;
	t_stack			*new_node;
	
	i = 0;
	while (args[i])
	{
		new_node = ft_newNode_pointer(ft_atoi(args[i]));
		ft_add_lastNode(stack, new_node);
		i++;
	}
	// Hasta aquí he metido el número correspondiente y el puntero en next
	// Ahora tengo que modificar el index
}

int	main(int argc, char **argv)
{
	char **args;
	t_stack	**stack_a;
	t_stack	**stack_b;
	
	if (argc < 2)
		return (-1);
	
	args = NULL;
	args = ft_join_args(argv);
	ft_check_args(args);
	// Start the stacks
	*stack_a = ft_calloc(1, (sizeof(t_stack)));
	*stack_b = ft_calloc(1, (sizeof(t_stack)));
	ft_init_stack(stack_a, args);
	
	
	
	return (0);
}