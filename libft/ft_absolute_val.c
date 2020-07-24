/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute_val.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 01:36:15 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 23:28:09 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_absolute_val() returns absolute value of an int.
*/

#include "libft.h"

int		ft_absolute_val(int n)
{
	if (n > 0)
		return (n);
	return (n * (-1));
}
