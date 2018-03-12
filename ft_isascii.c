/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 00:43:42 by minakim           #+#    #+#             */
/*   Updated: 2018/03/06 23:02:23 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** check if we have to include unsigned char
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
