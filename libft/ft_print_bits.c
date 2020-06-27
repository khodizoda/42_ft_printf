/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 14:56:52 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/28 14:56:55 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_print_bits() takes a byte, and prints it in binary
** WITHOUT A NEWLINE AT THE END.
*/

#include "libft.h"

void	ft_print_bits(unsigned char octet)
{
	int				i;
	unsigned char	mask;
	char			result;

	i = 7;
	mask = 1;
	while (i >= 0)
	{
		result = ((octet >> i) & mask) + '0';
		write(1, &result, 1);
		i--;
	}
}
