/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:21:16 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/28 15:35:51 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>

static int count_digits(int n)
{
    int count = 1;
    while (n >= 10)
    {
        n /= 10;
        count++;
    }
    return count;
}
static void fill_result(char *result, int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		result[i] = '-';
		i++;
		n = -n;
	}
	while (n >= 10)
	{
		result[i++] = (n % 10) + '0';
		n /= 10;
	}
	result[i++] = n + '0';
	result[i] = '\0';
}

static void reverse_str(char *str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}
char *ft_itoa(int n)
{
	char *result;
	int num_of_digs;
	int num_to_find;
	int start;
	int end;
	
	num_to_find = n;
	num_of_digs = count_digits(n);
	result = (char *)malloc((num_of_digs + 2) * sizeof(char));
	if (!result)
		return NULL;
	if (n < 0)
		start = 1;
	else
		start = 0;
	fill_result(result, n);
	end = strlen(result) - 1;
	reverse_str(result, start, end);
	return result;
}
	

int main() {
	// printf("%s\n", ft_itoa(-45));
	// printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(2147483647));

	return 0;
}