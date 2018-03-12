/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 01:00:31 by minakim           #+#    #+#             */
/*   Updated: 2018/03/06 23:03:47 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char*)malloc(sizeof(size_t) * len + 1);
	if (str != NULL && s != NULL)
	{
		while (i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
	}
	else
		return (NULL);
	str[i] = '\0';
	return (str);
}
