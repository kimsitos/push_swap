/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:26:43 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 17:05:26 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_list(t_list *lst)
{
	int i = 0;
	while (lst)
	{
		int *content = lst->content;
		printf("Pointer number %d %p\n",i , (void *)lst);
		printf("Content number %d %d\n", i, *content);
		printf("-------------------------------\n");
		lst = lst->next;
		i++;
	}
}
