/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:21:41 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/24 22:36:09 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexes(t_stack *stck)
{
	t_list	*act;
	t_list	*cmp;
	int	ind_bef;

	act = stck -> first;
	while (act != NULL)
	{
		cmp = stck -> first;
		ind_bef = 0;
		while (cmp != NULL)
		{
			if (act -> value > cmp -> value)
				ind_bef++;
			cmp = cmp -> next;
		}	
		act -> index_f = ind_bef;
		act = act -> next;
	}
}

void push2b (t_stack *a, t_stack *b)
{
	int	k;
	
	k = ft_sqrt(a -> size) * 1.26;
	while(a -> first != NULL)
	{
		if (a -> first -> index_f <= (int) b -> size)
			pb(a, b);
		else if (a -> first -> index_f <= (int) b -> size + k)
		{
			pb (a, b);
			rb (b);
		}
		else 
			ra (a);	
	}
}

void pushbck2a (t_stack *a, t_stack *b)
{
	while (b -> first != NULL)
	{
		move_tbo_2top(b);
		pa (a, b);
	}
}

void	ksort(t_stack *a, t_stack *b)
{
	indexes (a);
	push2b (a, b);
	pushbck2a (a, b);
}