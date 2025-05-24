/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bring2top.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:21:55 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/24 22:39:41 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void bring_to_top(t_stack *a, int pos)
{
    int size;
		
    size = a -> size;
		if (pos <= size / 2)
    {
      while (pos-- > 0)
				ra(a);
    }
    else
    {
      pos = size - pos;
      while (pos-- > 0)
				rra(a);
    }
}