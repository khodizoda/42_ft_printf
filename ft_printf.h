/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 14:17:59 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/30 17:16:01 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# include "./libft/libft.h"

typedef struct	s_fmt
{
	size_t		is_minus;
	size_t		is_zero;
	size_t		width;
	size_t		is_precision;
	size_t		precision;
	size_t		negative_prec;
	char		specifier;
	char		*spec_value;
	size_t		is_value_negative;
	size_t		value_len;
}				t_fmt;

typedef struct	s_len
{
	int			print_len;
}				t_len;

/*
** init  and reset format
*/

int				ft_printf(const char *format, ...);
void			init_format(t_fmt *fmt, t_len *pf_len);
void			reset_format(t_fmt *fmt);

/*
**	parse format string
*/

void			parse_input(char *str, t_fmt *fmt, t_len *pf_len,
				va_list *ap);
int				parse_flags(char *str, t_fmt *fmt);
int				parse_width(char *str, t_fmt *fmt, va_list *ap);
int				parse_precision(char *str, t_fmt *fmt, va_list *ap);
int				parse_numeric(char *str, size_t *fmt);
int				parse_specifier(char *str, t_fmt *fmt, va_list *ap);
void			parse_spec_value(t_fmt *fmt, va_list *ap);

/*
**	format string
*/

char			*format_hex(char *hex, char c);
void			format_input(t_fmt *fmt, t_len *pf_len);
void			format_precision_char(t_fmt *fmt);
void			format_precision_num(t_fmt *fmt);
void			format_width_char(t_fmt *fmt);
void			format_width_num(t_fmt *fmt);
char			*format_padding(t_fmt *fmt, int c, size_t reslen, int flag);

#endif
