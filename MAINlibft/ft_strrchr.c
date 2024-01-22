/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:14:57 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/21 16:15:54 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int len = strlen(s) - 1;
    while (*s)
    {
        if (s[len] == c)
			return &((char *)s)[len];
        len--;
		if (s[len] == '\0')  
			return NULL;
    }
	return (0);
}

int main()
{
    char str[] = "abcaa";
    int str2 = 'c';
    printf("%s", ft_strrchr(str, str2));
    return 0;
}