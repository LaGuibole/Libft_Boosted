/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:38:33 by guphilip          #+#    #+#             */
/*   Updated: 2025/03/26 16:40:52 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_print_u(int fd, unsigned int n)
{
	if (n >= 10)
		return (ft_print_u(fd, n / 10) + ft_print_u(fd, n % 10));
	return (ft_print_c(fd, n + '0'));
}
