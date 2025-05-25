/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks2.0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 02:17:42 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/25 20:27:50 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_args(int size, char **args)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!chck_num(args[i]) || !chck_int(args[i]))
		{
			return (0);
		}
		i++;
	}
	if (chck_ifdouble(size, args))
		return (0);
	return (1);
}
