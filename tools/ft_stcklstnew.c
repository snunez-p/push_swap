/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcklstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:16:13 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/24 22:39:00 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_stcklstnew(int value)
{
	t_list 	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> value = value;
	node -> index_f = -1;
	node -> next = NULL;
	return (node);
}
