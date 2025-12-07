/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:26:43 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 15:40:34 by stcozaci         ###   ########.fr       */
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
		printf("Target number               %d\n", lst->target);
		printf("Cost to be on top:          %d\n", lst->cost_top);
		printf("-------------------------------\n");
		lst = lst->next;
	}
}

void	print_list_lite(t_list *lst)
{
	printf("\nLST:\n");
	while (lst)
	{
		printf("%d	%d\n", lst->content, lst->cost_top);
		lst = lst->next;
	}
}
