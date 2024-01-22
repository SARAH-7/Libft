/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:57:25 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/20 14:51:34 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char	*org_dst = dst;
    if (dst <= src || dst >= (src + len))
    {
        while (len-- && src != 0)
            *(char *)dst++ = *(char *)src++;
    }
    else
    {
        dst += len;
        src += len;
        while (len-- && src != 0)
            *(char *)--dst = *(char *)--src;
    }
    return (org_dst);
}

int main()
{
    const char src[13] = "hello, world";
    char dst[13];
	char	*out;
    out = ft_memmove(dst, src, sizeof(src));
    printf("%s\n", out);
    return (0);
}
