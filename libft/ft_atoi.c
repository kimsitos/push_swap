/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:59:49 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/28 13:34:30 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *ntpr)
{
	int	nbr;
	int	neg;

	nbr = 0;
	neg = 1;
	while ((*ntpr >= 9 && *ntpr <= 13) || *ntpr == ' ')
		ntpr++;
	if (*ntpr == '-' || *ntpr == '+')
	{
		if (*ntpr == '-')
			neg = -neg;
		ntpr++;
	}
	while (ft_isdigit(*ntpr))
	{
		nbr = nbr * 10 + (*ntpr - '0');
		ntpr++;
	}
	return (nbr * neg);
}
