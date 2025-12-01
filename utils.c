/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:39:13 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/01 13:21:37 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	order(t_list *lst)
{
	int		temp_nb;

	while (lst)
	{
		temp_nb = lst->content;
		lst = lst->next;
		if (lst && temp_nb > lst->content)
			return (0);
	}
	return (1);
}

void	s(t_list **lst)
{
	t_list	*temp_first;
	t_list	*temp_second;

	temp_first = *lst;
	ft_printf(".\n");
	temp_second = (*lst)->next;
	ft_printf(":\n");
	temp->next = (*lst)->next;
	ft_printf("?\n");
	(*lst)->next = temp;
	ft_printf("swaped i think\n");
}
