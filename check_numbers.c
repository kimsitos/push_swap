/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:27:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/26 14:02:31 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *argv)
{
	int	i;

	i = 0;
	ft_printf("%s estas entrando a lo desconocido\n", argv);
	if (argv[i] == '+' || argv[i] == '-' || argv[i] == ' ')
		i++;
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

char	**save_numbers(int argc, char **argv)
{
	int		i;
	/* char	*temp2;
	char	*temp1; */
	char	**numbers;

	i = 1;
/* 	temp2 = ft_strdup("");
 */	while (argc > i)
	{
		numbers[i] = ft_split(argv[i], ' ');
		i++;
	}
	ft_printf("ARGV:%s\n", argv[1]);
	ft_printf("SPLIT:%s\n", numbers[0]);
	return (numbers);
}

int	*get_numbers(char **dirt_num)
{
	int	i;
	int	*clean_num;

	i = 0;
	if (!dirt_num)
		return (0);
	while (dirt_num[i])
		i++;
	clean_num = malloc(sizeof(int) * i);
	if (!clean_num)
		return (0);
	i = 0;
	while (dirt_num[i])
	{
		clean_num[i] = ft_atoi(dirt_num[i]);
		i++;
	}
	free_char_arry(dirt_num);
	return (clean_num);
}
