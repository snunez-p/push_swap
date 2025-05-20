/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:50:56 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/22 20:12:54 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	min(size_t n1, size_t n2)
{
	if (n1 < n2)
	{
		return (n1);
	}
	return (n2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n_s;
	size_t	n_res;
	char	*result;

	if (!s)
		return (NULL);
	n_s = ft_strlen(s);
	if (start >= n_s)
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	n_res = min(n_s - start, len);
	result = (char *)malloc((n_res + 1) * sizeof (char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s[start], n_res + 1);
	return (result);
}
