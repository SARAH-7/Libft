/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:40:22 by sbakhit           #+#    #+#             */
/*   Updated: 2024/01/05 08:50:58 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s = 0;
		s = (char *)s + 1;
		i++;
	}
}

int	main(void)
{
	int	str[3] = {1, 2, 3};
	int	j;
	int	i;

	j = 3;
	i = 0;
	ft_bzero(str, j * sizeof (int));
	while (i < 3)
	{
		printf("%d", str[i]);
		i++;
	}
}
