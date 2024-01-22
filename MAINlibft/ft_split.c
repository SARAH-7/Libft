/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:50:22 by sbakhit           #+#    #+#             */
/*   Updated: 2023/12/30 20:36:29 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include  <stdlib.h>
#include <string.h>
char *ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
		return NULL;
		
	int start = 0;
	char *trimmed_string;
	while(strchr(set, s1[start]))
		start++;
	int end = strlen(s1);
	while(strrchr(set, s1[end]))
		end--;
	trimmed_string = malloc((end - start + 1) *sizeof(char *));
	int	i = 0;
	while (s1 && start < end + 1)
		trimmed_string[i++] = s1[start++];
	if (!trimmed_string)
		return NULL;
	trimmed_string[start] = '\0';
	return trimmed_string;
}
char assiging_values(char **split, char *s, char c)
{
	int	num_of_letters;
	int	i;

	i = 0;
	int	split_index = 0;
	int	index_of_index;
	while (s[i]){
		num_of_letters = 1;
		while (!(strchr(&c, s[i++])))
			num_of_letters++;
		if (num_of_letters != 1)
			{
				split[split_index] = malloc(num_of_letters * sizeof(char));
				index_of_index = 0;
				i -= num_of_letters;
				while (--num_of_letters)
				{
					split[split_index][index_of_index] = s[i++];
					index_of_index++;
				}
				split[split_index][index_of_index] = '\0';
				split_index++;
			}
	}
	return (**split);
}

#include <unistd.h>
char **ft_split(char const *temp, char c)
{
	char **split;
	int num_of_words = 0;
	int i = 0;
	
	char *s = ft_strtrim(temp, &c);
	
	while(s[i++])
	{
		if (s[i] == c && s[i + 1] != c)
			num_of_words++;
	}
	split = malloc((num_of_words + 2)*sizeof(char *));
	if (!split)
		return NULL;
	num_of_words += 1;
	assiging_values(split, s,c);
		return split;
}

int	main()
{
	char **str = ft_split("   abc  def gh   i jk   ", ' ');
	int	i = 0;
	while (str[i])
		printf("%s    ", str[i++]);
}