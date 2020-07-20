/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 14:17:59 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/19 23:19:14 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>			//remove

# include "./libft/libft.h"

typedef struct	s_fmt
{
	size_t		is_minus;
	size_t		is_zero;
	size_t		width;
	ssize_t		precision;
	char		specifier;
	char		*spec_value;
}				t_fmt;

typedef struct	s_buff
{
	char		*buff;
	size_t		buff_len;
}				t_buff;

/*
** printf specific functions
*/

int				ft_printf(const char *format, ...);
void			parse_input(const char *str, va_list*ap, t_fmt *fmt, t_buff *output);
void			init_format(t_fmt *fmt, t_buff *output);

/*
** move to libft
*/

#endif
