/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:32:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/10 22:27:33 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_char(char ch, va_list args)
{
	if (ch == 'c')
		return (print_char(va_arg(args, int)));
	if (ch == 's')
		return (print_str(va_arg(args, char *)));
	if (ch == 'p')
		return (print_ptr(va_arg(args, void *)));
	if (ch == 'd' || ch == 'i')
		return (print_nbr(va_arg(args, int), INTSIG));
	if (ch == 'u')
		return (print_nbr(va_arg(args, unsigned int), INTUSIG));
	if (ch == 'x')
		return (print_hex(va_arg(args, long int), LOWER));
	if (ch == 'X')
		return (print_hex(va_arg(args, long int), UPPER));
	if (ch == '%')
		return (print_char('%'));
	return (0);
}

