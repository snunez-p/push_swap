/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:13 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/24 18:05:13 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//incluir esta función el utils
#include "push_swap.h"

int	ft_findp(t_stack *a, int value)
{
    t_list *act = a -> first;
    int pos = 0;

    while (act)
    {
        if (act -> value == value)
            return pos;
        act = act -> next;
        pos++;
    }
		return(pos);
}
