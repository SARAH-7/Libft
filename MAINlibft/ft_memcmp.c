/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:53:30 by sbakhit           #+#    #+#             */
/*   Updated: 2024/01/05 13:58:39 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str = (unsigned char*)s1;
	unsigned char *str2 = (unsigned char*)s2;
	
	while (n--)
    {
        if (*str != *str2)
            return (*str - *str2);
        str++;
        str2++;
    }
    return (0);
}
int	main()
{
	const char string1[] = "helllo";
	const char string2[] = "hello";
	printf("%d\n", ft_memcmp(string1,string2,5));
	printf("%d\n", memcmp(string1,string2,5));
	// printf("%d", memcmp("hiy","hi",3));
}