/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:56:37 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 19:27:44 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list *test;

// 	test = ft_lstnew("hello world");
// 	printf("%s\n", (char *)test->content);
// 	if(test->next == NULL)
// 		printf("Yes null\n");
// 	return (0);
// }