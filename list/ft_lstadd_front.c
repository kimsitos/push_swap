/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:28:14 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 19:28:06 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>

// int	main()
// {
// 	t_list *list = ft_lstnew("World ");
// 	t_list *node = ft_lstnew("hello ");

// 	printf("AFTER LIST CONTENT: %s\n", (char *)list->content);
// 	printf("NODE CONTENT: %s\n", (char *)node->content);

// 	ft_lstadd_front(&list, node);

// 	printf("\n\nBEFORE LIST PRIMER NODO:  %s\n", (char *)list->content);
// 	return 0;
// }