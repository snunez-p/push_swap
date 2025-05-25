/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:20:25 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/25 20:24:45 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	error_exit(char **args_split)
{
	write(2, "Error\n", 6);
	if (args_split)
		free_split(args_split);
	exit(EXIT_FAILURE);
}

int	count_split(char **splitted)
{
	int	i;

	i = 0;
	while (splitted[i] != NULL)
		i++;
	return (i);
}

int	create_list(t_box *stck, int size, char **elements)
{
	int		i;
	t_list	*new;

	i = 0;
	while (i < size)
	{
		new = ft_stcklstnew(ft_atoi(elements[i]));
		if (!new)
		{
			ft_stcklstclear(&(stck->a));
			return (0);
		}
		ft_stckaddback(&(stck->a), new);
		i++;
	}
	return (1);
}

void	parseo(t_box *stck, int ac, char **av)
{
	char	**args_split;

	stck->a.first = NULL;
	stck->a.last = NULL;
	stck->a.size = 0;
	stck->b.first = NULL;
	stck->b.last = NULL;
	stck->b.size = 0;
	if (ac == 2)
	{
		args_split = ft_split(av[1], ' ');
		if (!args_split)
			error_exit(NULL);
		if (!validate_args(count_split(args_split), args_split))
			error_exit(args_split);
		if (!create_list(stck, count_split(args_split), args_split))
			error_exit(args_split);
		free_split(args_split);
		return ;
	}
	if (!validate_args(ac - 1, av + 1))
		error_exit(NULL);
	if (!create_list(stck, ac - 1, av + 1))
		error_exit(NULL);
}
