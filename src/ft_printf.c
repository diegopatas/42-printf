/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:45:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/10 17:30:00 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list args;
	int		len;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
			len += print_char(*str);
		elseif (*str == '%' && ft_strchar("cspdiuxX%", *(str + 1)))
			len += check_char(*(str + 1), args);
		str++;
	}
	va_end(args);
	return (len);
}
