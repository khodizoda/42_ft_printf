/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddafter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:22:28 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/27 16:22:29 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds the element new after a given location in the list.
** Param. #1 The address of a pointer to the first link of a list.
** Param. #2 The link to add at the beginning of the list.
*/

#include "libft.h"

void	ft_lstaddafter(t_list **alst, t_list *new, size_t n)
{
	size_t	i;
	t_list	*tmp;

	if (!*alst || !alst || !new || n == 0)
		return ;
	if (ft_lstlen(alst) < n)
		return ;
	else
	{
		i = 1;
		tmp = *alst;
		while (i < n)
		{
			tmp = tmp->next;
			i++;
		}
		new->next = tmp->next;
		tmp->next = new;
	}
}
