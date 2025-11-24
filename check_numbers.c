/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:13:33 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/24 16:47:39 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '+' || argv[i] == '-' || argv[i] == ' ')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
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
	return (numbers);
}

int	main(int argc, char *argv[])
{
	char	**numbers;
	char	*temp;
	int		i;

	i = 0;
	temp = save_numbers(argc, argv);
	numbers = ft_split(temp, ' ');
	while (numbers[i])
	{
		if (!is_number(numbers[i]))
		{
			ft_printf("fallo, %s no es un numero\n", numbers[i]);
			return (0);
		}
		ft_printf("%s si es un número\n", numbers[i]);
		i++;
	}
}
