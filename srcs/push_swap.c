/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:57:17 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/21 18:00:28 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_box	ps;

	if (argc == 1)
		return (0);
	parseo(&ps, argc, argv);
	
	//despues del codigo
	if (!validate_args(args_split))
	{
		write(2, "Error\n", 6);
		free(/*algo*/);
		exit(EXIT_FAILURE);
	}
}

