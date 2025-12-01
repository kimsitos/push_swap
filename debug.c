/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:26:43 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/30 04:30:16 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("Pointer number %p\n", (void *)lst);
		printf("Content number %d\n", lst->content);
		printf("-------------------------------\n");
		lst = lst->next;
	}
}
