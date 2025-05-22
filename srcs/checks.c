/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:08:59 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/21 19:15:03 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	chck_num(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
	{
		error_exit()
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
	int				i;
	int				signo;

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

int	chck_ifdouble(char **stck)
{
	int	i;
	int j;

	if (!stck)
		return (0);
	i = 0;
	while (stck[i])
	{
		j = i + 1;
		while (stck[j])
		{
			if (ft_atoll(stck[i]) == ft_atoll(stck[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
