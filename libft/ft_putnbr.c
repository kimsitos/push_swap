/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:08:42 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/28 13:28:05 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int		len;
	char	x;

	len = 0;
	if (n == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	if (n < 0)
	{
		len += write(1, "-", 1);
		len += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	else
	{
		x = n + '0';
		len += write(1, &x, 1);
	}
	return (len);
}
