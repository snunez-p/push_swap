/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorts_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:02:37 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/18 00:19:55 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    sort_5(t_stack *a, t_stack *b)
{
    int	s;
		int min_o;
		int pos;
    
    s = ft_stcksize(a);
    if (s == 5)
    {
        min_o = min_o_occ(a);
        pos = ft_findp(a, min_o);
        bring_to_top(a, pos);
        pb(a, b);
        sort_4(a, b);
        pa(a, b);
    }
}

void    sort_6(t_stack *a, t_stack *b)
{
    int	s;
		int	min_o;
		int	pos;

    s = ft_stcksize(a);
    if (s == 6)
    {
			min_o = min_o_occ(a);
			pos = ft_findp(a, min_o);
			bring_to_top(a, pos);
			pb(a, b);
			sort_4and5(a);
			pa(a, b);
    }
}

void    sort_7(t_stack *a, t_stack *b)
{
    int	s;
		int	min_o;
		int	pos;

    s = ft_stcksize(a);
    if (s == 7)
    {
			min_o = min_o_occ(a);
			pos = ft_findp(a, min_o);
      bring_to_top(a, pos);
			pb(a, b);
			sort_6(a);
			pa(a, b);
    }
}