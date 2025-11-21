/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:36:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/21 16:48:26 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	i = 1;
	while (i <= argc && argv[i])
	{
		number = ft_atoi(argv[i]);
		if (ft_isdigit(number + '0'))
		{
			ft_printf("YES!!, %d is a number\n", number);
		}
		else
			ft_printf("no :(, %s its not a number\n", argv[i]);
		i++;
	}
	return (0);
}
