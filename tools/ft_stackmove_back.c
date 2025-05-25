/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmove_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:48:10 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/25 20:25:51 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackmove_back(t_stack *stck)
{
	t_list	*temp;

	if (!stck || !stck->first || !stck->first->next)
		return ;
	temp = stck->first;
	stck->first = temp->next;
	stck->last->next = temp;
	temp->next = NULL;
	stck->last = temp;
}
