/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:54:46 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 19:28:04 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = temp;
	}
}
// #include <stdio.h>

// int main (void)
// {
// 	t_list *list1 = ft_lstnew(ft_strdup("hello"));
// 	t_list *list2 = ft_lstnew(ft_strdup("world"));
// 	t_list *list3 = ft_lstnew(ft_strdup("playing"));

// 	ft_lstadd_back(&list1, list2);
// 	ft_lstadd_back(&list1, list3);

// 	t_list *temp = list1;
// 	printf("--RESULT BEFORE--");
// 	while (temp)
// 	{
// 		printf("%s\n", (char *) temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&list1, free);
// 	temp = list1;
// 	printf("--RESULTS AFTER--");
// 	while (temp)
// 	{
// 		if(temp->content)
// 			printf("%s\n", (char *) temp->content);
// 		temp = temp->next;
// 	}
// 	return 0;
// }