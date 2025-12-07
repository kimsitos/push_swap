/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:08:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 20:06:23 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_a_top(t_list **a, t_list *low_mov)
{
	if (low_mov->target_below_median == 0)
	{
		while (low_mov->target_cost_top)
		{
			ra(a);
			low_mov->target_cost_top--;
		}
	}
	else
	{
		while (low_mov->target_cost_top)
		{
			rra(a);
			low_mov->target_cost_top--;
		}
	}
}

void	move_b_top(t_list **b, t_list *low_mov)
{
	if (low_mov->below_median == 0)
	{
		while (low_mov->cost_top)
		{
			rb(b);
			low_mov->cost_top--;
		}
	}
	else
	{
		while (low_mov->cost_top)
		{
			rrb(b);
			low_mov->cost_top--;
		}
	}
}

void	move_to_push(t_list **a, t_list **b, t_list *low_mov)
{
	if (low_mov->below_median == 0 && low_mov->target_below_median == 0)
	{
		while (low_mov->cost_top && low_mov->target_cost_top)
		{
			rr(a, b);
			low_mov->cost_top--;
			low_mov->target_cost_top--;
		}
	}
	else if (low_mov->below_median == 1 && low_mov->target_below_median == 1)
	{
		while (low_mov->cost_top && low_mov->target_cost_top)
		{
			rrr(a, b);
			low_mov->cost_top--;
			low_mov->target_cost_top--;
		}
	}
	move_a_top(a, low_mov);
	move_b_top(b, low_mov);
	pa(a, b);
}
