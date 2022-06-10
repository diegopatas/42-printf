/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:55:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/08 21:16:17 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <stdarg.h>

#include "libft.h"

typedef struct s_pack
{
	char	*str;
	va_list	args;
	size_t	len;
}		t_pack;

int	ft_printf(const char *str, ...);

#endif
