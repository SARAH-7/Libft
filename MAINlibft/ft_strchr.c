/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:14:57 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/24 14:01:25 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
		{
			return (char *)s;
			break;
		}
		else if (*s == 0)  
			return NULL;
        s++;
    }
	return (0);
}

int main()
{   char str[] = "abcaa";
    int str2 = 'c';
    printf("%s", ft_strchr(str, str2));
    printf("%s", strchr(str, str2)); 
 
    return 0;
}