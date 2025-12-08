/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:59:20 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/08 09:48:43 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*select_lowest_moves(t_list *b)
{
	t_list	*lowest;

	lowest = b;
	while (b)
	{
		if (b->total_cost < lowest->total_cost)
			lowest = b;
		b = b->next;
	}
	return (lowest);
}

void	turk_algorithm(t_list **a, t_list **b)
{
	int		biggest;
	t_list	*low_mov;

	biggest = get_biggest(*a);
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->content == biggest)
			ra(a);
		pb(b, a);
	}
	sort_three(a);
	while (*b)
	{
		set_costs(*b);
		set_target_cost(*a, *b);
		set_total_cost(b);
		low_mov = select_lowest_moves(*b);
		move_to_push(a, b, low_mov);
	}
	while (ft_lstlast(*a)->content != get_biggest(*a))
		ra(a);
}
