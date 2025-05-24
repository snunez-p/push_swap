/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:51:29 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/24 22:40:37 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	if (a -> size >= 2)
	{
		ft_swap_g(a);
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack *b)
{
	if (b -> size >= 2)
	{
		ft_swap_g(b);
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack *b, t_stack *a)
{
	if (a -> size >= 2 && b -> size >= 2)
	{
		ft_swap_g(a);
		ft_swap_g(b);
		write(1, "ss\n", 3);
	}
	else if (a -> size >= 2)
		sa(a);
	else if (b -> size >= 2)
		sb(b);
}
