/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_char_arry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:37:47 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/26 13:02:34 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_char_arry(char **arry)
{
	int	i;

	i = 0;
	while (arry[i])
	{
		free(arry[i]);
		i++;
	}
	free(arry);
}
