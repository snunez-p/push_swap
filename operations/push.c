/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:22:42 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/24 22:40:56 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	t_list	*index;

	if (a -> size != 0)
	{
		index = ft_exterminio_total_stack(a);
		ft_stackadd_front(b, index);
		write(1, "pb\n", 3);
	}
}

void	pa(t_stack *a, t_stack *b)
{
	t_list	*index;

	if (b -> size != 0)
	{
		index = ft_exterminio_total_stack(b);
		ft_stackadd_front(a, index);
		write(1, "pa\n", 3);
	}
}
