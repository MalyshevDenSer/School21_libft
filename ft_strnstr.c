/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:49:34 by cborton           #+#    #+#             */
/*   Updated: 2020/11/09 18:18:58 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t needle_len;

	needle_len = ft_strlen(n);
	if (n[0] == '\0')
		return ((char *)h);
	while (*h && len >= needle_len)
	{
		if (*h == *n && !(ft_memcmp(h, n, needle_len)))
			return ((char *)h);
		h++;
		len--;
	}
	return (NULL);
}
