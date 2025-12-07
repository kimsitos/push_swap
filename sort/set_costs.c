/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_costs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:11:03 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 17:19:30 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_costs(t_list **lst)
{
	t_list	*temp;
	int		lstsize;
	int		index;

	temp = *lst;
	lstsize = ft_lstsize(*lst);
	index = 0;
	while (temp)
	{
		if (index <= lstsize / 2)
			temp->cost_top = index;
		else
		{
			temp->cost_top = lstsize - index;
			temp->below_median = 1;
		}
		temp = temp->next;
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

void	set_target_cost(t_list *a, t_list **b)
{
	t_list	*temp;
	t_list	*save;
	int		target;
	int		index;

	temp = *b;
	while (temp)
	{
		save = a;
		target = get_target(a, temp);
		index = 0;
		while (save->content != target)
		{
			index++;
			save = save->next;
		}
		if (index <= ft_lstsize(a) / 2)
			temp->target_cost_top = index;
		else
		{
			temp->target_cost_top = ft_lstsize(a) - index;
			temp->target_avobe_median = 1;
		}
		temp = temp->next;
	}
}

void	set_total_cost(t_list **b)
{
	t_list	*temp;

	temp = *b;
	while (temp)
	{
		temp->total_cost = temp->cost_top + temp->target_cost_top;
		temp = temp->next;
	}
}
