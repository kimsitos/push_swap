/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:57:36 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/02 18:47:26 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argn, char **argv)
{
	if (!argn)
		return (0);
	t_list *a = parse(argv);
	t_list *b = NULL;
	ft_printf("LIST A\n");
	print_list(a);
	ft_printf("\nLIST B\n");
	print_list(b);
	
	//the cange is made
	ra(&a);
	rra(&a);
	ft_printf("\n==ROTATE MADE==\n");
	
	//printing list
	ft_printf("LIST A\n");
	print_list(a);
	ft_printf("\nLIST B\n");
	print_list(b);
	ft_lstclear(&b);
	ft_lstclear(&a);
	return (0);
}
