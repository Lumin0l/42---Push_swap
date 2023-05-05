/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:11:02 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/05/05 17:57:02 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Create a new node and return pointer to it
t_stack	*ft_newNode_pointer(int number)
{
	t_stack	*new_node;
	
	new_node = ft_calloc(1, (sizeof(t_stack)));
	new_node->value = number;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);	
}

// Adds the node to a stack in the last position
void	ft_add_lastNode(t_stack **stack, t_stack *new_node)
{
	t_stack	*pointer;

	if (*stack)
	{
		pointer = ft_lastNode_pointer(*stack);
		pointer->next = new_node;
		new_node->next = NULL;
	}
	else
	{
		*stack = new_node;
		(*stack)->next = NULL;
	}
}

// Returns a pointer to the last node
t_stack	*ft_lastNode_pointer(t_stack *position)
{
	t_stack	*temp;

	temp = position;
	while (temp->next)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (temp);
	}
	return (temp);
}
