/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:57:36 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 16:33:57 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argn, char **argv)
{
	if(!argn)
		return (0);
	t_list *lst = get_numbers(argv);
	print_list(lst);
	return (0);
}
