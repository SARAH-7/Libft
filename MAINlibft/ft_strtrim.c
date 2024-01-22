/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 14:04:06 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/30 17:56:36 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

char *ft_strtrim(char  *s1, char const *set)
{
	if (!s1 || !set)
		return (NULL);
		
	// int start = 0;
	char *trimmed_string;
	char *start;
	char *last;
	int	first_index = 0;
	int	last_index = strlen(s1) - 1;

	while(strchr(set, s1[first_index]))
		first_index++;
	start = &((s1)[first_index]);
	while(strrchr(set, s1[last_index]))
		last_index--;
	last = &((s1)[last_index]);
	printf("first_index = %d\n", first_index);
	printf("last_index = %d\n", last_index);
	// printf("last_index = %d\n", last_index);
	trimmed_string = malloc((last_index - first_index + 2) * sizeof(char));
	int	i = 0;
	while (start != last)
	{
		start = &((s1)[first_index]);
		trimmed_string[i++] = (s1)[first_index++];
	}
	if (!trimmed_string)
		return NULL;
	trimmed_string[i] = '\0';
	return trimmed_string;
}	
int	main()
{
printf("%s",ft_strtrim("xx123xx", "xxx"));
}
