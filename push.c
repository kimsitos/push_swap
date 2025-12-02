/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:48:20 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/02 16:13:29 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	p(t_list **take, t_list **to_push)
{
	t_list	*temp;

	if (!*take)
		return ;
	temp = *take;
	*take = (*take)->next;
	ft_lstadd_front(to_push, temp);
}

void	pa(t_list **a, t_list **b)
{
	p(a, b);
	ft_printf("pa\n");
}

void	pb(t_list **b, t_list **a)
{
	p(a, b);
	ft_printf("pb\n");
}
