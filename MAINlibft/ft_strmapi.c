/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:03:48 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/27 13:33:10 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i = 0;
    if (!s)
        return NULL;
    str = malloc((strlen(s) + 1) *sizeof(char *));
    
    if (!str)
        return NULL;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;     
}

char f(unsigned int i, char s)
{
    char str;
    str = s - 32;   
    return str; 
}

    int	main()
{
    char *s1 = "abc";
    int i = 0;
    char *s2 = ft_strmapi(s1, *f);
	printf("%s", s2);
}
