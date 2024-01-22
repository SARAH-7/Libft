/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:25:39 by sbakhit           #+#    #+#             */
/*   Updated: 2024/01/11 19:27:33 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i = 0;
    
    if (!s)
        return;
    while (s[i])
    {
        (*f)(i, &s[i]);
        i++;
    }
}

void f(unsigned int i, char *s)
{
    *s = *s - 32;
}

int main()
{
    char s1[] = "abc";
    ft_striteri(s1, &f);
    printf("%s\n", s1);

    return 0;
}
