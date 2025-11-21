/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:17:34 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/28 13:38:12 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temdest;
	unsigned const char	*temsrc;

	temdest = (unsigned char *)dest;
	temsrc = (unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	if (temdest >= temsrc)
	{
		while (n--)
			temdest[n] = temsrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
