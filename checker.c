/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:29:46 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/30 04:38:39 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_number(char *number)
{
	int	i;

	i = 0;
	if(number[i] == '-' || number[i] == '+')
		i++;
	while (number[i])
	{
		if (!(number[i] >= '0' && number[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

static void	itolist(char *argv, t_list **number)
{
	char	**temp;
	int		j;

	j = 0;
	temp = ft_split(argv, ' ');
	while (temp[j])
	{
		if (!is_number(temp[j]))
		{
			ft_freearry_string(temp);
			ft_lstclear(number);
			ft_printf("Error\n");
			exit (1);
		}
		ft_lstadd_back(number, ft_lstnew(ft_atoi(temp[j])));
		j++;
	}
	ft_freearry_string(temp);
}

t_list	*parse(char **argv)
{
	int		i;
	t_list	*numbers;

	i = 1;
	numbers = NULL;
	while (argv[i])
	{
		itolist(argv[i], &numbers);
		i++;
	}
	return (numbers);
}
