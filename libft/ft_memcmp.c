/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:48:40 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/28 13:38:25 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tems1;
	unsigned char	*tems2;

	i = 0;
	tems1 = (unsigned char *)s1;
	tems2 = (unsigned char *)s2;
	while (i < n)
	{
		if (tems1[i] != tems2[i])
			return (tems1[i] - tems2[i]);
		i++;
	}
	return (0);
}
