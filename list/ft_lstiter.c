/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:32:45 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 19:44:23 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	t_list	*temp;

	while (lst)
	{
		temp = lst->next;
		(*f)(lst->content);
		lst = temp;
	}
}
