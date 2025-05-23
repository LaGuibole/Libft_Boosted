/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:37:51 by guphilip          #+#    #+#             */
/*   Updated: 2025/04/08 17:31:29 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	int	ft_print_hexa(int fd, unsigned int n, char *c)
{
	if (n >= 16)
		return (ft_print_hexa(fd, n / 16, c) + ft_print_hexa(fd, n % 16, c));
	return (ft_print_c(fd, c[n]));
}

int	ft_print_x(int fd, unsigned int n, int format)
{
	char	*chars;

	chars = L_HEX_CHARSET;
	if (format == 'X')
		chars = U_HEX_CHARSET;
	return (ft_print_hexa(fd, n, chars));
}
