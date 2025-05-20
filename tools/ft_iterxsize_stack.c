/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterxsize_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:00:17 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/07 22:34:08 by snunez-p         ###   ########.fr       */
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
