/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:05:20 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/04 10:55:59 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	s(t_list **lst)
{
	t_list	*temp;

	if (ft_lstsize(*lst) <= 1)
		return ;
	temp = *lst;
	*lst = (*lst)->next;
	temp->next = (*lst)->next;
	(*lst)->next = temp;
}

void	sa(t_list **lst)
{
	s(lst);
	ft_printf("sa\n");
}

void	sb(t_list **lst)
{
	s(lst);
	ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	s(a);
	s(b);
	ft_printf("ss\n");
}
