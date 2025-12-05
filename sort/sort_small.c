/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:37:24 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/05 13:31:05 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	a = (*lst)->content;
	b = (*lst)->next->content;
	c = (*lst)->next->next->content;
	if (a > b && b < c && c > a)
		sa(lst);
	else if (a > b && b > c && c < a)
		rra(lst);
	else if (a > b && b < c && c < a)
		ra(lst);
	else if (a > b && b > c && c < a)
	{
		sa(lst);
		rra(lst);
	}
	else if (a < b && b > c && c > a)
	{
		sa(lst);
		ra(lst);
	}
}
// Case 1: [1,2,3] → No action needed
// Case 2: [2,1,3] → sa 
// Case 3: [2,3,1] → rra
// Case 4: [3,1,2] → ra
// Case 5: [3,2,1] → sa + rra
// Case 6: [1,3,2] → sa + ra