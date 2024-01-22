/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:54:53 by sbakhit           #+#    #+#             */
/*   Updated: 2024/01/08 14:55:29 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (!needle || *needle == '\0')
        return (char *)haystack;

    size_t needle_len = strlen(needle);
    
    while (*haystack && len >= needle_len)
    {
        if (strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;
        haystack++;
        len--;
    }

    return (NULL);
}

int main() 
{
    const char *haystack = "heuuo, World!";
    const char *needle = "uu";
    size_t len = strlen(haystack);

    printf("%s", ft_strnstr(haystack, needle, 3));
    return 0;
}
