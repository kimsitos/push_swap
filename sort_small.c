/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:31:56 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/04 12:46:54 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **lst)
{
	if (!*lst || ft_lstsize(*lst) < 2)
		return ;
	if (!((*lst)->content < (*lst)->next->content))
		sb(lst);
}

void	sort_three(t_list **lst)
{
	if ((*lst)->content > (*lst)->next->content)
		sa(lst);
	if (ft_lstlast(*lst)->content < (*lst)->content)
		rra(lst);
	if ((*lst)->next->content > ft_lstlast(*lst)->content)
	{
		rra(lst);
		sa(lst);
	}
}

void	sort_five(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 3)
		pb(b, a);
	sort_three(a);
	sort_two(b);
	if ((*b)->content < (*a)->content)
		pa(a, b);
	if (ft_lstlast(*b)->content > ft_lstlast(*a)->content)
	{
		sb(b);
		pa(a, b);
		ra(a);
	}
	while (*b)
	{
		if ((*b)->content < (*a)->content)
			pa(a, b);
		else
			ra(a);
	}
	while (!order(*a))
		rra(a);
}
