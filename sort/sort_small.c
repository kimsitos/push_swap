/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:37:24 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/09 12:10:08 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **lst)
{
	if ((*lst)->content > (*lst)->next->content)
		sa(lst);
	if (ft_lstlast(*lst)->content < (*lst)->content)
		rra(lst);
}
