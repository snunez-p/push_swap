/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:20:25 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/22 08:15:04 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	parseo(t_box *stck, int ac, char **av)
{
	int		i;
	char	**args_split;

	if (ac == 2)
	{
		args_split = ft_split(av[1], ' ');
		if (!args_split)
			error_exit(NULL);
	}
	else
	{
		args_split = malloc(sizeof(char *) * ac);
		if (!args_split)
			error_exit(NULL);
		i = 0;
		while (i < ac - 1)
		{
			args_split[i] = ft_strdup(av[i + 1]);
			i++;
		}
		args_split[i] = NULL;
	}
	stck->args = split_args(args_split);
	free_split(args_split);
	if (!stck->args)
		error_exit(NULL);
}

void	error_exit(char **args_split)
{
	write(2, "Error\n", 6);
	if (args_split)
		free_split(args_split); 
	exit(EXIT_FAILURE);
}

char **split_args(char **args)
{
	int i;
	int j;
	int k;
	char *temp;
	char **split_args;
	
	if (size <= 0)
		return (NULL);
	split_args = malloc (sizeof(char *) * size + 1);
	if (!split_args)
		return (NULL);
	i = 0;
	while (args[i])
	{
		temp = ft_split(args[i], ' ');
			return (NULL);
		while (temp[j])
		{
			split_args[k] = ft_strdup(temp[j]);
			free(temp[j++]);
			k++;
		}
		free (temp);
		i++;
	}
	split_args[k] = NULL;
	return (split_args);
}

void free_split(char **split)
{
	int i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}
