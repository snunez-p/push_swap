/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min&max_occ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:37:05 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/21 17:54:29 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int min_occ(t_stack *stck)
{
	t_list *act;
  int 	min_o;
	
	act = stck->first;
	min_o = act->value;
	while (act)
	{
		if (act->value < min_o)
      min_o = act->value;
      act = act->next;
  }
}

int max_occ(t_stck *stck)
{
	t_list *act;
  int 	max_o;
	
	act = stck->first;
	max_o = act->value;
	while (act)
	{
		if (act->value > max_o)
      max_o = act->value;
      act = act->next;
  }
}
