/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanol <imanol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:56 by imanol            #+#    #+#             */
/*   Updated: 2024/01/09 18:13:18 by imanol           ###   ########.fr       */
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

static void append_node(t_stack_node **stack, int n) // Function that searches for the last node to append to the linked list
{
	t_stack_node *node;
	t_stack_node *last_node;

	if (!stack)
		return;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return;
	node->next = NULL; // Set the next pointer of the new node to NULL because it will be the last node in the list
	node->number = n;	   // Set the `next` data of of the new node to `n` value
	if (!(*stack))	   // Check if the stack is empty or currently pointing to NULL, indicating a first node needs to be found
	{
		*stack = node;	   // If empty, update the pointer *stack to point to the node, effectively making it the new head of the linked list
		node->prev = NULL; // Set the head node's previous pointer to NULL as it's the first node
	}
	else // If the stack is not empty, it means there are existing nodes in the linked list
	{
		last_node = find_last(*stack); // In which case, find the last node
		last_node->next = node;		   // Append the new node to the last node
		node->prev = last_node;		   // Update the previous pointer of the new node and complete the appending
	}
}

/*
 * Create the stack with the command line values
 * Checks are embedded in the creation itslef
 * 		~Syntax errors
 * 		~Duplicate values
 * 		~Over|Underflow
 */

void init_stack_a(t_stack_node **a, char **argv)
{
	long n;
	int i;

	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			free_errors(a);
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		if (error_duplicate(*a, (int)n))
			free_errors(a);
		append_node(a, (int)n);
		i++;
	}
}