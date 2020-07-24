/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 21:33:16 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 23:42:10 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The char_to_str() takes a char and creates new str with malloc,
** by appending char and '\0'.
** Returns str.
*/

#include "libft.h"

char	*char_to_str(char c)
{
	char	*out;

	out = ft_strnew(1);
	out[0] = c;
	return (out);
}
