/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:29:46 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 20:54:36 by stcozaci         ###   ########.fr       */
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

t_list	*itolist(char *argv)
{
	t_list	*lst;
	char	**temp;
	int		j;

	j = 0;
	temp = ft_split(argv, ' ');
	lst = malloc(sizeof(t_list));
	if (!lst)
		return (0);
	while (temp[j])
	{
		ft_printf("HA LLEGADO AL BUCLE DE ITOLIST");
		if (!is_number(temp[j]))
		{
			ft_freearry_string(temp);
			ft_lstclear(&lst);
			ft_printf("Error\n");
			return (NULL);
		}
		ft_lstadd_back(&lst, ft_lstnew(ft_atoi(temp[j])));
		j++;
	}
	ft_freearry_string(temp);
	return (lst);
}

t_list	*parse(char **argv)
{
	int		i;
	t_list	*numbers;
	t_list	*temp;

	i = 1;
	numbers = malloc(sizeof(t_list));
	if (!numbers)
		return (0);
	while (argv[i])
	{
		temp = itolist(argv[i]);
		if (temp == NULL)
		{
			ft_lstclear(&temp);
			exit (1);
		}
		ft_lstadd_back(&numbers, temp);
		i++;
	}
	return (numbers);
}
