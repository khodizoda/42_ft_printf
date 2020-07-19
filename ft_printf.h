/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 14:17:59 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/19 01:56:56 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h> 	//remove

# include "./libft/libft.h"

typedef struct	s_flags
{
	size_t		is_minus;
	size_t		is_zero;
	size_t 		width;
	size_t		precision;
	char		specifier;
	size_t		buff_len;
	char 		*buff;
}				t_flags;

/*
** printf specific functions
*/

int				ft_printf(const char *format, ...);
void			parse_input(char *str, va_list *ap);

/*
** move to libft
*/

char			*ft_itoa_base(int num, int base);

#endif
