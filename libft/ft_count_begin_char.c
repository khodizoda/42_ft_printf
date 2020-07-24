/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_begin_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:30:07 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 23:31:00 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_count_begin_char() counts occurrences of char c in the
** beginning of string str.
** Returns the count of char c in str.
*/

#include "libft.h"

size_t	ft_count_begin_char(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] == c)
		++i;
	return (i);
}
