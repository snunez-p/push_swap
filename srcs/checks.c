/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:08:59 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/25 20:24:35 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chck_num(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
	{
		error_exit(&str);
		return (0);
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

long long	ft_atoll(const char *str)
{
	long long	res;
	int			i;
	int			signo;

	i = 0;
	while (str[i] == ' ')
		i++;
	signo = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * signo);
}

int	chck_int(char *str)
{
	long long	n;

	n = ft_atoll(str);
	if (n >= -2147483648 && n <= 2147483647)
		return (1);
	else
		return (0);
}

int	chck_ifdouble(int size, char **args)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoll(args[i]) == ft_atoll(args[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sorted(t_stack stck)
{
	t_list	*index;

	index = stck.first;
	while (index != NULL && index->next != NULL)
	{
		if (index->value > index->next->value)
			return (0);
		index = index->next;
	}
	return (1);
}
