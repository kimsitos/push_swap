/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:59:20 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 17:20:29 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	turk_algorithm(t_list **a, t_list **b)
{
	int	biggest;

	biggest = get_biggest(*a);
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->content == biggest)
			ra(a);
		pb(b, a);
	}
	set_costs(b);
	set_target_cost(*a, b);
	set_total_cost(b);
}
