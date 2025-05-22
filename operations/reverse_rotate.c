/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:08:08 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/21 18:02:42 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack *a)
{
	if (a -> size >= 2)
	{
		ft_back2front(a);
		write (1, "rra\n", 4);
	}
}

void	rrb(t_stack *b)
{
	if (b -> size >= 2)
	{
		ft_back2front(b);
		write (1, "rrb\n", 4);
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	if (a -> size >= 2 && b -> size >= 2)
	{
		ft_back2front(a);
		ft_back2front(b);
		write (1, "rrr\n", 4);
	}
	else if (a -> size >= 2)
		rra(a);
	else if (b -> size >= 2)
		rrb(b);
}
