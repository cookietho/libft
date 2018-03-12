/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 01:14:21 by minakim           #+#    #+#             */
/*   Updated: 2018/03/06 23:19:14 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * l);
	if (str == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	l = 0;
	while (s1[i] != '\0')
	{
		str[l] = s1[i];
		i++;
		l++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[l] = s2[i];
		i++;
		l++;
	}
	str[l] = '\0';
	return (str);
}
