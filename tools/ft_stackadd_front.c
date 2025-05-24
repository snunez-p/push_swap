/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:29:05 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/24 22:39:12 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_front(t_stack *stck, t_list *index)
{
	if (index == NULL)
		return ;
	if (stck -> size == 0)
		stck -> last = index;
	index -> next = stck -> first;
	stck -> first = index;
	stck -> size = stck -> size + 1;
}
