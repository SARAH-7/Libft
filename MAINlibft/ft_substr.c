/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:10:16 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/23 12:23:21 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *substring = malloc(sizeof len);
	unsigned int	i = 0;
	start -=1;
	while (s && i < len)
	{
		substring[i++] = s[start++];
	}
	if (!s)
		return NULL;
	return (substring);
}

int	main()
{
	printf("%s", ft_substr("hello", 2, 5));
}