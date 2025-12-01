/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:29:46 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/01 10:18:35 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	clear_all(char **str, t_list **lst)
{
	ft_freearry_string(str);
	ft_lstclear(lst);
	ft_printf("Error\n");
	exit (1);
}

static int	is_number(char *number)
{
	int	i;

	i = 0;
	if (number[i] == '-' || number[i] == '+')
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
	long	temp_nb;

	j = 0;
	temp = ft_split(argv, ' ');
	while (temp[j])
	{
		if (!is_number(temp[j]))
			clear_all(temp, number);
		temp_nb = ft_atol(temp[j]);
		if (!(temp_nb >= -2147483648 && temp_nb <= 2147483647))
			clear_all(temp, number);
		ft_lstadd_back(number, ft_lstnew(temp_nb));
		j++;
	}
	ft_freearry_string(temp);
}

static int	repeated(t_list *lst)
{
	int		temp_nb;
	t_list	*temp_lst;

	while (lst)
	{
		temp_lst = lst->next;
		temp_nb = lst->content;
		while (temp_lst)
		{
			if (temp_nb == temp_lst->content)
				return (1);
			temp_lst = temp_lst->next;
		}
		lst = lst->next;
	}
	return (0);
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
	if (repeated(numbers))
	{
		ft_lstclear(&numbers);
		ft_printf("numbers repeated");
		exit (1);
	}
	return (numbers);
}
