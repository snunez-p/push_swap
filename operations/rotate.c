/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:41:49 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/07 19:40:32 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	if (a -> size > 1)
	{
		ft_stackmove_back(a);
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack *b)
{
	if (b -> size > 1)
	{
		ft_stackmove_back(b);
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack *a, t_stack *b)
{
	if (a -> size > 1 && b-> size > 1)
	{
		ft_stackmove_back(a);
		ft_stackmove_back(b);
		write(1, "rr\n", 3);
	}
	else if (a -> size > 1)
		ra(a);
	else if (b -> size > 1)
		rb(b);
}
