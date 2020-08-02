/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 00:57:00 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/02 12:37:41 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_putstr_len() prints input to stdout, given str and its length.
*/

#include "libft.h"

void	ft_putstr_len(char *str, size_t len)
{
	write(1, str, len);
}
