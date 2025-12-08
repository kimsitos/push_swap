/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_costs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:11:03 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/08 11:31:07 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_costs(t_list *lst)
{
	int		lstsize;
	int		index;

	lstsize = ft_lstsize(lst);
	index = 0;
	while (lst)
	{
		if (index <= lstsize / 2)
		{
			lst->cost_top = index;
			lst->below_median = 0;
		}
		else
		{
			lst->cost_top = lstsize - index;
			lst->below_median = 1;
		}
		lst = lst->next;
		index++;
	}
}

int	get_target(t_list *a, t_list *b)
{
	int		target;

	target = get_biggest(a);
	while (a)
	{
		if (a->content > b->content && a->content < target)
			target = a->content;
		a = a->next;
	}
	return (target);
}

void	set_target_cost(t_list *a, t_list *b)
{
	t_list	*save;
	int		index;

	while (b)
	{
		save = a;
		index = 0;
		while (save->content != get_target(a, b))
		{
			index++;
			save = save->next;
		}
		if (index <= ft_lstsize(a) / 2)
		{
			b->target_cost_top = index;
			b->target_below_median = 0;
		}
		else
		{
			b->target_cost_top = ft_lstsize(a) - index;
			b->target_below_median = 1;
		}
		b = b->next;
	}
}

void	set_total_cost(t_list **b)
{
	t_list	*temp;

	temp = *b;
	while (temp)
	{
		if (temp->below_median == temp->target_below_median)
		{
			if (temp->target_cost_top > temp->cost_top)
				temp->total_cost = temp->target_cost_top;
			else
				temp->total_cost = temp->cost_top;
		}
		else
			temp->total_cost = temp->cost_top + temp->target_cost_top;
		temp = temp->next;
	}
}
