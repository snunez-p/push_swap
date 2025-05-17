/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:13 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/18 00:14:16 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//incluir esta función el utils

int	findp(t_stack *a, int value)
{
    t_node *act = a -> first;
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
