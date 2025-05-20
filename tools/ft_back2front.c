/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back2front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:56:10 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/07 19:21:15 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_back2front(t_stack *stck)
{
	t_list	*temp;
	t_list	*prev;

	if (!stck || !stck->first || !stck->first->next)
		return ;
	prev = ft_iterxsize_stack(stck);
	temp = stck -> last;
	prev -> next = NULL;
	temp -> next = stck -> first;
	stck -> first = temp;
	stck -> last = prev;
}
