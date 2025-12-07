/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:39:13 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 19:46:14 by stcozaci         ###   ########.fr       */
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

int	get_biggest(t_list *lst)
{
	int	biggest;

	biggest = lst->content;
	while (lst)
	{
		if (lst->content > biggest)
			biggest = lst->content;
		lst = lst->next;
	}
	return (biggest);
}
