/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:25:13 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 19:27:54 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	int i = 0;

// 	// char c = 'a';
// 	t_list *list = ft_lstnew("h");

// 	while(i <= 5)
// 	{
// 		ft_lstadd_front(&list, ft_lstnew("s"));
// 		i++;
// 	}
// 	printf ("longitud de list = %d", ft_lstsize(list));
// }