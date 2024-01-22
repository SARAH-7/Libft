/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:36:49 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/20 13:09:07 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*org_dst;

	org_dst = dst;
	while (n-- && src != 0)
	{
		*(char *)dst++ = *(char *)src++;
	}
	return (org_dst);
}
	  
int main () {
	const char src[13] = "hello, world";
	char dst[13];
	
	ft_memcpy(dst, src, sizeof(src));
	printf("%s", dst);

	return(0);
}
