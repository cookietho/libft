/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 16:43:10 by minakim           #+#    #+#             */
/*   Updated: 2018/03/09 23:04:27 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*str;

	neg = 1;
	len = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0)
	{
		if (n < 0)
		{
			str[0] = '-';
			neg = -1;
		}
		str[len - 1] = (((n % 10) * (neg)) + '0');
		n = (n / 10);
		len--;
	}
	return (str);
}
