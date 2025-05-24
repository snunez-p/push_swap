/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tbo.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:56:34 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/24 22:50:30 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int getbiggest(t_stack *stck, t_list **biggie)
{
	t_list *act;
	int i;
	int j;
	
	act = stck -> first;
	i = 0;
	*biggie = act;
	j = i;
	while (act != NULL)
	{
		if (act -> index_f > (*biggie) -> index_f)
		{
			*biggie = act;
			j = i;
		}
		act = act -> next;
		i++;
	}
	return (j);
}
void move_tbo_2top(t_stack *stck)
{
	t_list *biggie;
	int j;
	int half;
	
	j = getbiggest(stck, &biggie);
	half = stck -> size / 2;
	if (j <= half)
	{
		while (stck -> first -> index_f != biggie -> index_f)
			rb (stck);
	}
	else
	{
		while (stck -> first -> index_f != biggie -> index_f)
			rrb (stck);
	}
}

