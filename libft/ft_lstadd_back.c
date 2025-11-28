/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:27:05 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/27 15:02:04 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = ft_lstlast(*lst);
	if (temp == NULL)
	{
		*lst = new;
		return ;
	}
	temp->next = new;
}

// #include <stdio.h>

// int	main()
// {
// 	t_list *list = NULL;
// 	t_list *temp = ft_lstlast(list);

// 	ft_lstadd_back(&list, ft_lstnew("something"));
// 	temp = ft_lstlast(list);
// 	printf("\nBEFORE LIST ULTIMO NODO:  %s\n", (char *)temp->content);
// 	return 0;
// }