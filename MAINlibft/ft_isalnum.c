/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:06:03 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/19 13:48:38 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
int	main()
{
	printf("%d", ft_isalnum(99));
}