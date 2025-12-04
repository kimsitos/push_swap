/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:59 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/04 10:55:52 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*penultimate;

	if (!*lst || !(*lst)->next)
		return ;
	last = *lst;
	penultimate = *lst;
	while (last)
	{
		last = last->next;
		if (last && last->next)
			penultimate = last;
	}
	last = ft_lstlast(*lst);
	penultimate->next = NULL;
	ft_lstadd_front(lst, last);
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
