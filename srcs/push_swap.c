/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:57:17 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/19 23:18:59 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_box	ps;

	if (argc == 1)
		return (0);
	parseo(&ps, argc, argv);
}
// hacer algoritmo supongo, invetigar si se puede hacer mix de ksort con merge sort
