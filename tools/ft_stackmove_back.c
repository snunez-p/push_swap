/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmove_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:48:10 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/24 22:39:08 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackmove_back(t_stack *stck)
{
	t_list	*temp;

	if (!stck || !stck->first || !stck->first->next)
		return ;
	temp = stck -> first;
	stck -> first = temp -> next;
	stck -> last -> next = temp;
	temp -> next = NULL;
	stck -> last = temp;
}
