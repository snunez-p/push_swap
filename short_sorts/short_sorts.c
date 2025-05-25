/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 02:19:09 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/25 20:36:13 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *a)
{
	if (a->first->next->next == NULL)
	{
		if (a->first->value > a->first->next->value)
			sa(a);
	}
}

void	sort_3_conditions(t_stack *a, int first, int second, int third)
{
	if (first > second && second < third && third > first)
		sa(a);
	else if (first > second && second > third && third < first)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && third < first)
		ra(a);
	else if (first < second && second > third && third > first)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && third < first)
		rra(a);
}

void	sort_3(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->first->value;
	second = a->first->next->value;
	third = a->last->value;
	sort_3_conditions(a, first, second, third);
}

void	sort_4(t_stack *a, t_stack *b)
{
	int	min_o;
	int	pos;

	if (a->size == 4)
	{
		min_o = min_occ(a);
		pos = ft_findp(a, min_o);
		bring_to_top(a, pos);
		pb(a, b);
		sort_3(a);
		pa(a, b);
	}
}
