/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcklstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:16:13 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/14 19:33:18 by snunez-p         ###   ########.fr       */
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
