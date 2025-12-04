/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:39:13 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/04 12:32:54 by stcozaci         ###   ########.fr       */
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


