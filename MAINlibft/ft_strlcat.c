/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:35:08 by sbakhit           #+#    #+#             */
/*   Updated: 2024/01/05 12:12:10 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t j = 0;
    size_t k = 0;

    while (dst[j] != '\0')
        j++;
    while (src[k] != '\0' && j < dstsize - 1)
    {
        dst[j] = src[k];
        k++;
        j++;
    }

    dst[j] = '\0';
    
    return j;
}

int main()
{
    const char src[7] = "somaya";
    char dst[11] = "omar";
    size_t out;

    out = ft_strlcat(dst, src, sizeof(dst));
    printf("%zu", out);
  
   return 0;
}
