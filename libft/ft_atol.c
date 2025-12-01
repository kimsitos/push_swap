/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 09:50:58 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/01 09:52:29 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

long	ft_atol(const char *ntpr)
{
	long	nbr;
	long	neg;

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
