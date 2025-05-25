/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorts_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:02:37 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/25 20:27:34 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_stack *a, t_stack *b)
{
	int	min_o;
	int	pos;

	if (a->size == 5)
	{
		min_o = min_occ(a);
		pos = ft_findp(a, min_o);
		bring_to_top(a, pos);
		pb(a, b);
		sort_4(a, b);
		pa(a, b);
	}
}

void	sort_6(t_stack *a, t_stack *b)
{
	int	min_o;
	int	pos;

	if (a->size == 6)
	{
		min_o = min_occ(a);
		pos = ft_findp(a, min_o);
		bring_to_top(a, pos);
		pb(a, b);
		sort_5(a, b);
		pa(a, b);
	}
}

void	sort_7(t_stack *a, t_stack *b)
{
	int	min_o;
	int	pos;

	if (a->size == 7)
	{
		min_o = min_occ(a);
		pos = ft_findp(a, min_o);
		bring_to_top(a, pos);
		pb(a, b);
		sort_6(a, b);
		pa(a, b);
	}
}
