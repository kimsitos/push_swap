/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:05:49 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/27 13:25:17 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
// #include <stdio.h>

// int main(void)
// {
// 	t_list *h = ft_lstnew("hello");

// 	int i = 0;
// 	while(i < 3)
// 	{
// 		ft_lstadd_front(&h, ft_lstnew("nope"));
// 		i++;
// 	}
// 	t_list	*great = NULL;
// 	t_list *temp = ft_lstlast(great);
// 	printf("%s", (char *)temp->content);
// 	if (temp->next == NULL)
// 		printf("is last");
// 	return 0;
// }