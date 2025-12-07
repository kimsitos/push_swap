/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:56:37 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 16:43:05 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->cost_top = 0;
	node->below_median = 0;
	node->target_cost_top = 0;
	node->target_avobe_median = 0;
	node->total_cost = 0;
	node->next = NULL;
	return (node);
}

