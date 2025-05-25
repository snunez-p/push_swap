/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:57:17 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/25 20:24:51 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_box	ps;

	if (argc == 1)
		return (0);
	parseo(&ps, argc, argv);
	if (is_sorted(ps.a))
		;
	else if (ps.a.size == 2)
		sort_2(&ps.a);
	else if (ps.a.size == 3)
		sort_3(&ps.a);
	else if (ps.a.size == 4)
		sort_4(&ps.a, &ps.b);
	else if (ps.a.size == 5)
		sort_5(&ps.a, &ps.b);
	else if (ps.a.size == 6)
		sort_6(&ps.a, &ps.b);
	else if (ps.a.size == 7)
		sort_7(&ps.a, &ps.b);
	else
		ksort(&ps.a, &ps.b);
	ft_stcklstclear(&ps.a);
	ft_stcklstclear(&ps.b);
}
