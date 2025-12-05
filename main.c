/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:57:36 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/05 13:20:33 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argn, char **argv)
{
	t_list	*a;
	t_list	*b;
	
	if (argn <= 1)
		exit (1);
	a = parse(argv);
	b = NULL;
	sort_three(&a);
	print_list(a);
	//printing list
	// print_list_lite(a);
	ft_lstclear(&b);
	ft_lstclear(&a);
	return (0);
}
