/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bring2top.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:21:55 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/18 00:23:57 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//chequear si ya no la he hecho, si no, ponerla en utils

void bring_to_top(t_stack *a, int pos)
{
    int size;
		
		size = ft_stcksize(a);
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