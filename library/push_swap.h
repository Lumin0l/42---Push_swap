/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:11:16 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/05/05 18:03:16 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

// Stack
typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}				t_stack;
	
// Utils
void	ft_check_args(char **args);
void	ft_error(char *message);

// Stack
t_stack	*ft_newNode_pointer(int number);
void	ft_add_lastNode(t_stack **stack, t_stack *new_node);
t_stack	*ft_lastNode_pointer(t_stack *position);

#endif

