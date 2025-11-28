/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:18:36 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 19:46:35 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstdelone(t_list *lst)
{
	if (lst)
	{
		free(lst);
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	t_list *h = ft_lstnew(ft_strdup("THREE"));
// 	printf("Content before: %s\n", (char *) h->content);
// 	ft_lstdelone(h, free);
// 	printf("Content after: %s\n", (char *) h->content);
// 	return (0);
// }
