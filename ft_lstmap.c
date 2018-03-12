/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 22:35:07 by minakim           #+#    #+#             */
/*   Updated: 2018/03/09 22:35:18 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if ((new = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (lst)
	{
		tmp = (*f)(lst);
		new = tmp;
		while (lst)
		{
			tmp->next = (*f)(lst->next);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (new);
}
