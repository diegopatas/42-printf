/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:14:46 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/10 23:18:17 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

int	print_hex(unsigned int nbr, int hexcase)
{
	if (hexcase)
		return (print_base(nbr, INTSIG, HEXU));
	else
		return (print_base(nbr, INTUSIG, HEXL));
}
