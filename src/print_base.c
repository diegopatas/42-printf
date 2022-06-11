/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:50:17 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/10 22:54:25 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_base(long long int nbr, int sign, char *base)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoag(nbr, sign, base);
	if (str != NULL)
	{
		len = print_str(str);
		free(str);
	}
	return (len);
}
