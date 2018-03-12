/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 00:58:12 by minakim           #+#    #+#             */
/*   Updated: 2018/03/06 23:23:51 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch >= 32 && ch <= 126)
		return (1);
	return (0);
}

/*
**check if unsigned char has to be used
**figure out what ascii 0 to 31 do
*/
