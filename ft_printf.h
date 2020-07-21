/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 14:17:59 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/20 23:09:30 by gkhodizo         ###   ########.fr       */
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
	ssize_t		width;
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
void			init_format(t_fmt *fmt, t_buff *output);

/*
**	parse format string
*/

void			parse_input(const char *str, t_fmt *fmt, t_buff *output,
				va_list *ap);
int				parse_flags(const char *str, t_fmt *fmt);
int				parse_width(const char *str, t_fmt *fmt, va_list *ap);
int				parse_precision(const char *str, t_fmt *fmt, va_list *ap);
int				parse_numeric(const char *str, ssize_t *fmt, va_list *ap);
int				parse_specifier(const char *str, t_fmt *fmt, va_list *ap);
//void			parse_spec_value(t_fmt *fmt, va_list *ap);

/*
** move to libft
*/

#endif
