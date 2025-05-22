/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 02:19:09 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/21 19:24:09 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#includes "../includes/push_swap.h"

void    sort_2(t_stack *a)
{
    if (a -> first -> next -> next == NULL)
    {
        if (a -> first -> value > a -> first -> next -> value)
            sa(a);
    }
}

void    sort_3(t_stack *a)
{
    int     s;
    int     first;
    int     second;
    int     third;

    s = ft_stcksize(a);
    first = a -> first -> value;
    second = a -> first -> next -> value;
    third = a -> last -> value;
    if (s == 3)
    {  
        if (first > second && second < third && third > first)
            sa(a);
        else if (first > second && second > third && third < first)
        {
            sa(a);
            rra(a);
        }
        else if (first > second && second < third && third < first)
            ra(a);
        else if (first < second && second > third && third > first)
        {
            sa(a);
            ra(a);
        }
        else if (first < second && second > third && third < first)
            rra(a);
    }
}

void    sort_4 (t_stack *a, t_stack *b)
{
    int     s;
    int min_o;
    int pos;

    s = ft_stcksize(a);
    if (s == 4)
    {
        min_o = min_occ(a);
        pos = ft_findp(a, min);
        bring_to_top(a, pos);
        pb(a, b);
        sort_3(a);
        pa(a, b);
    }
    
}
