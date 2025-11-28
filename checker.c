/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:29:46 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 16:54:37 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_number(char *number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		if (!(number[i] >= '0' && number[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	*add_number(char *temp)
{
	int	*value;

	value = malloc(sizeof(int));
	if (!value)
		return (0);
	*value = ft_atoi(temp);
	return (value);
}

t_list	*get_numbers(char **argv)
{
	int		i;
	int		j;
	char	**temp;
	t_list	*numbers;

	i = 1;
	numbers = malloc(sizeof(t_list));
	if(!numbers)
		return (0);
	while (argv[i])
	{
		j = 0;
		temp = ft_split(argv[i], ' ');
		while (temp[j])
		{
			if (is_number(temp[j]))
				ft_lstadd_back(&numbers, ft_lstnew(add_number(temp[j])));
			else
			{
				ft_lstclear(&numbers, free);
				ft_printf("Error, invalid argument(s)");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (numbers);
}
