/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:27:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/26 12:21:32 by stcozaci         ###   ########.fr       */
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
		temp = ft_strjoin (numbers, " ");
		free(numbers);
		numbers = ft_strjoin(temp, argv[i]);
		free(temp);
		i++;
	}
	return (numbers);
}

int *get_numbers(char *dirt_num)
{
	int	i;
	int	*clean_num;

	i = 0;
	while (dirt_num[i])
	{
		if (!is_number(dirt_num[i]))
		{
			ft_printf("%s is not a number", dirt_num[i]);
			return (0);
		}
		i++;
	}
	clean_num = malloc(sizeof(int) * i);
	if (!clean_num)
		return (0;)
	i = 0;
	while (dirt_num[i])
	{
		clean_num[i] = ft_atoi(dirt_num[i]);
		free(dirt_num[i]);
		i++;
	}
	free (dirt_num[i]);
	return (clean_num);
}
