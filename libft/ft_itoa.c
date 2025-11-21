/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:49:00 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/28 13:35:13 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intl(long int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_charnb(char *str, long int n, size_t len)
{
	str[len--] = '\0';
	if (n == 0)
		str[len] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = ft_intl(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_charnb(str, n, len);
	return (str);
}
