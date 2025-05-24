/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckaddback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:40:08 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/24 18:45:47 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_stckaddback(t_stack *stck, t_list *index)
{
	if (index == NULL)
		return ;
	if (stck -> size == 0)
	{
		stck -> first = index;
		stck -> last = index;
		stck -> size = stck -> size + 1;
	}
	else
	{
		stck -> last -> next = index;
		stck -> last = index;
		stck -> size = stck -> size + 1;
	}
}