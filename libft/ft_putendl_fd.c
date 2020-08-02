/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:02:21 by gkhodizo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/08/02 12:55:39 by gkhodizo         ###   ########.fr       */
=======
/*   Updated: 2020/08/02 09:51:18 by gkhodizo         ###   ########.fr       */
>>>>>>> c27967d8f0c0bc355bf576c8b538c3dc08c132c7
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the file descriptor fd followed by a '\n'.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
