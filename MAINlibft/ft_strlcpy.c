/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:20:21 by sbakhit           #+#    #+#             */
/*   Updated: 2024/01/05 11:16:27 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (dstsize == 0)
		return (strlen(src));
	while (*src && len < dstsize - 1)
	{
		*dst++ = *src++;
		len++;
	}
	*dst = '\0';
	return (len + strlen(src));
}

int main()
{
    const char src[13] = "hello, world";
    char dst[13];
	size_t	out;
    out = ft_strlcpy(dst, src, sizeof(src));
    printf("%zu\n", out);
    return (0);
}