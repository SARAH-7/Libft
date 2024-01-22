/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:48:29 by sbakhit           #+#    #+#             */
/*   Updated: 2024/01/05 09:47:53 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add;

	if (*lst)
	{
		add = ft_lstlast(*lst);
		add->next = new;
	}
	else
		*lst = new;
}
int	main(void)
{
	t_list	*list = NULL;

	// Creating nodes and adding them to the back of the list
	ft_lstadd_back(&list, ft_lstnew(1));
	ft_lstadd_back(&list, ft_lstnew(2));
	ft_lstadd_back(&list, ft_lstnew(3));

	// Printing the list
	print_list(list);

	// Freeing the allocated memory
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return (0);
}