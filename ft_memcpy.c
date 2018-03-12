/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:03:50 by minakim           #+#    #+#             */
/*   Updated: 2018/03/08 19:07:06 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ds;
	const char	*sr;

	i = 0;
	ds = dst;
	sr = src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	ds[i] = '\0';
	return (dst);
}
