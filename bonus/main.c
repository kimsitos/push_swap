/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:53:43 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/09 04:39:13 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_all(t_list **a, t_list **b, char *mov)
{
	free(mov);
	ft_lstclear(a);
	ft_lstclear(b);
	exit(0);
}

int	main(int argn, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	*mov;

	if (argn <= 1)
		exit (1);
	a = parse(argv);
	b = NULL;
	mov = get_next_line(0);
	while (mov)
	{
		case_swap(mov, &a, &b);
		case_push(mov, &a, &b);
		case_rotate(mov, &a, &b);
		case_reverse_rotate(mov, &a, &b);
		mov = get_next_line(0);
	}
	if (b != NULL || !order(a))
	{
		ft_printf("KO\n");
		free_all(&a, &b, mov);
	}
	ft_printf("OK\n");
	free_all(&a, &b, mov);
}
