/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_g.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:23:55 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/07 16:55:35 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_g(t_stack *stck)
{
	t_list	*index;

	if (stck -> size < 2)
		return ;
	index = stck -> first;
	stck -> first = index -> next;
	index -> next = stck -> first -> next;
	stck->first->next = index;
	if (stck -> size == 2)
		stck -> last = index;
}
