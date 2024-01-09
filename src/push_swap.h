#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack_node
{
	// This as a minimum needs values for the int it stores, the index number in the list and pointers to next and prev.
	// For this particular version we also need some other info variables:
	int		number;
	int		index;
	int		push_cost;
	bool	above_median;
	bool	cheapest;
	struct s_stack_node *next;
	struct s_stack_node *prev;
	struct s_stack_node *target_node;	
} t_stack_node

// Error Handling


#endif