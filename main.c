/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:57:36 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/08 11:45:39 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argn, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		numbers_to_order;

	if (argn <= 1)
		exit (1);
	a = parse(argv);
	b = NULL;
	numbers_to_order = ft_lstsize(a);
	if (numbers_to_order == 2)
	{
		if (a->content > a->next->content)
			sa(&a);
	}
	else if (numbers_to_order == 3)
		sort_three(&a);
	else if (numbers_to_order >= 3)
		turk_algorithm(&a, &b);
	ft_lstclear(&b);
	ft_lstclear(&a);
	return (0);
}
