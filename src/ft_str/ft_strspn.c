/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:44:54 by guphilip          #+#    #+#             */
/*   Updated: 2025/02/05 13:47:14 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *str, const char *accept)
{
	size_t	i;
	size_t	j;
	int	found;

	i = 0;
	while (str[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (str[i] == accept[j])
				found = 1;
			j++;
		}
		if (!found)
			return (i);
		i++;
	}
	return (1);
}
