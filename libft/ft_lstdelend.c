/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:53:19 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/27 17:53:21 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Deletes node from the end of a list
*/

#include "libft.h"

void	ft_lstdelend(t_list **alst)
{
	t_list *prev;
	t_list *last;

	if (!alst || !*alst)
		return ;
	last = *alst;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	if (last == *alst)
		*alst = NULL;
	else
		prev->next = NULL;
	free(last);
}
