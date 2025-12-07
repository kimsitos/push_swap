/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:26:43 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 19:13:12 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_list(t_list *lst)
{
	printf("\n==LIST==\n");
	while (lst)
	{
		printf("Pointer number              %p\n", (void *)lst);
		printf("Content number              %d\n", lst->content);
		printf("Cost to be on top:          %d\n", lst->cost_top);
		printf("Target cost to be on top    %d\n", lst->target_cost_top);
		printf("Total costs                 %d\n", lst->total_cost);
		printf("-------------------------------\n");
		lst = lst->next;
	}
}

void	print_list_lite(t_list *lst)
{
	printf("\nLST:\n");
	while (lst)
	{
		printf("%d	%d	%d	%d\n", lst->content, lst->cost_top, lst->target_cost_top, lst->total_cost);
		lst = lst->next;
	}
	printf("num	cost 	targcost		totcost\n");
}
