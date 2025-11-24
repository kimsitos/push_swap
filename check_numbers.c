/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:13:33 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/24 16:02:31 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '+' || argv[i] == '-')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
		{
			ft_printf("%s is not a number\n", argv);
			return (0);
		}
		i++;
	}
	ft_printf("%s is a digit\n", argv);
	return (0);
}

char	*save_numbers(int argc, char **argv)
{
	int		i;
	char	*numbers;
	char	*temp;

	i = 1;
	numbers = ft_strdup("");
	while (argc > i)
	{
		if (!argv[i])
			break ;
		temp = numbers;
		numbers = ft_strjoin(temp, argv[i]);
		free(temp);
		i++;
	}
	ft_printf("the numbers are: %s\n", numbers);
	return (numbers);
}

int	main(int argc, char *argv[])
{
	char *numbers;

	numbers = save_numbers(argc, argv);
}