/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcklstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:13:17 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/25 20:26:57 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stcklstclear(t_stack *stck)
{
	t_list	*index;
	t_list	*next;

	index = stck->first;
	while (index)
	{
		next = index->next;
		free(index);
		index = next;
	}
	stck->first = NULL;
	stck->last = NULL;
	stck->size = 0;
}
