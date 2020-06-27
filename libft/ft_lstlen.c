/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:32:09 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/27 16:32:10 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calculates len of a list.
*/

#include "libft.h"

size_t	ft_lstlen(t_list **alst)
{
	size_t len;
	t_list *tmp;

	if (!*alst || !alst)
		return (0);
	len = 0;
	tmp = *alst;
	while (tmp != 0)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
