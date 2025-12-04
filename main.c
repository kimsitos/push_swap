/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:57:36 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/04 13:14:25 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argn, char **argv)
{
	if (argn <= 1)
		exit (1);
	t_list *a = parse(argv);
	t_list *b = NULL;
	int	length = ft_lstsize(a);
	if (length <= 2)
		sort_two(&a);
	else if(length == 3)
		sort_three(&a);
	else if (length <= 5)
		sort_five(&a, &b);
	
	//printing list
	// print_list_lite(a);
	ft_lstclear(&b);
	ft_lstclear(&a);
	return (0);
}
