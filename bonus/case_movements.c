/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_movements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 03:16:50 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/09 04:38:39 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	case_swap(char *mov, t_list **a, t_list **b)
{
	if (!ft_strncmp(mov, "sa\n", 3))
		swap(a);
	else if (!ft_strncmp(mov, "sb\n", 3))
		swap(b);
	else if (!ft_strncmp(mov, "ss\n", 3))
	{
		swap(a);
		swap(b);
	}
}

void	case_push(char *mov, t_list **a, t_list **b)
{
	if (!ft_strncmp(mov, "pa\n", 3))
		push(b, a);
	else if (!ft_strncmp(mov, "pb\n", 3))
		push(a, b);
}

void	case_rotate(char *mov, t_list **a, t_list **b)
{
	if (!ft_strncmp(mov, "ra\n", 3))
		rotate(a);
	else if (!ft_strncmp(mov, "rb\n", 3))
		rotate(b);
	else if (!ft_strncmp("rr\n", mov, 3))
	{
		rotate(b);
		rotate(a);
	}
}

void	case_reverse_rotate(char *mov, t_list **a, t_list **b)
{
	if (!ft_strncmp(mov, "rra\n", 4))
		reverse_rotate(a);
	else if (!ft_strncmp(mov, "rrb\n", 4))
		reverse_rotate(b);
	else if (!ft_strncmp(mov, "rrr\n", 4))
	{
		reverse_rotate(b);
		reverse_rotate(a);
	}
}
