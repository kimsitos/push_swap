/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:32:45 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/27 18:51:07 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	while (lst)
	{
		temp = lst->next;
		(*f)(lst->content);
		lst = temp;
	}
}

// #include <stdio.h>

// void printer(void *arg)
// {
// 	printf("%s\n", (char*)arg);
// }

// int main (void)
// {
// 	t_list *list1 = ft_lstnew(ft_strdup("hello"));
// 	t_list *list2 = ft_lstnew(ft_strdup("world"));
// 	t_list *list3 = ft_lstnew(ft_strdup("playing"));

// 	ft_lstadd_back(&list1, list2);
// 	ft_lstadd_back(&list1, list3);

// 	ft_lstiter(list1, printer);
// 	return 0;
// }
