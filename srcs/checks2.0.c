/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks2.0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 02:17:42 by amaltea           #+#    #+#             */
/*   Updated: 2025/05/21 19:14:49 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#includes "../includes/push_swap.h"

int	validate_args(char **args)
{
	int i;
	
	i = 0;
	while (args[i])
	{
		if (!chck_num(args[i]) || !chck_int(args[i]))
		{
			error_exit(args);
			return (0);
		}
		i++;
	}
	if (chck_ifdouble(args))
		return (0);
	return (1);
}

