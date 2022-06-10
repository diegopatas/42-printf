/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:45:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/09 19:02:02 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	t_pack	*reg;
	size_t	length;

	reg = (t_pack *)malloc(sizeof(t_pack));
	if(!reg)
		return (0);
	va_start(reg->args, str);
	reg->len = 0;
	while (*str)
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			reg->len++;
		}
		elseif (*str == '%' && ft_strchar("cspdiuxX%", *(str + 1)))
		{

		}
		str++;
	}
	va_end(reg->args);
	length = reg->len;
	free(reg);
	return ((int) length);
}
