/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exterminio_total_stack.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:26:57 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/25 20:25:08 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// (Stack pop, saca el elemento de arriba)

t_list	*ft_exterminio_total_stack(t_stack *stck)
{
	t_list	*index;

	if (stck->size == 0)
		return (NULL);
	index = stck->first;
	stck->first = stck->first->next;
	index->next = NULL;
	stck->size = stck->size - 1;
	if (stck->size == 0)
		stck->last = NULL;
	return (index);
}
