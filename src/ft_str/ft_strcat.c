/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:28:17 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/07 15:34:46 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    my_strcat(char **dst_ptr, const char *src)
{
    size_t    dst_len;
    size_t    src_len;
    char    *ans;

    dst_len = ft_strlen(*dst_ptr);
    src_len = ft_strlen(src);
    ans = malloc(dst_len + src_len + 1);
    if (ans)
    {
        ft_memcpy(ans, *dst_ptr, dst_len);
        ft_memcpy(ans + dst_len, src, src_len);
        ans[dst_len + src_len] = '\0';
    }
    free(*dst_ptr);
    *dst_ptr = ans;
}
