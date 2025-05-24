/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterxsize_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:00:17 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/24 22:39:17 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_iterxsize_stack(t_stack *stck)
{
	t_list	*tmp;

	if (!stck || !stck->first || !stck->first->next)
		return (NULL);
	tmp = stck -> first;
	while (tmp->next->next != NULL)
		tmp = tmp -> next;
	return (tmp);
}
