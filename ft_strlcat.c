/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:02:29 by minakim           #+#    #+#             */
/*   Updated: 2018/03/08 18:38:05 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t ds;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	ds = i;
	while (src[i - ds] && i + 1 < dstsize)
	{
		dst[i] = src[i - ds];
		i++;
	}
	if (ds + 1 == dstsize)
		dst[i] = '\0';
	return (ds + ft_strlen(src));
}
