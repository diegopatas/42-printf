/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:57:33 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/10 23:11:15 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*make_itoagstr(const char *buffer)
{
	char	*str;
	int		index;
	size_t	len;

	len = ft_strlen(buffer);
	index = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str != NULL)
	{
		while (len--)
			str[index++] = buffer[len];
		str[index] = '\0';
	}
	return (str);
}

char	*ft_itoag(long long int nbr, int sign, char *base)
{
	unsigned long long int	n;
	char					buffer[30];
	int						neg;
	size_t					div;
	int						index;

	div = ft_strlen(base);
	if (div == 0)
		return (NULL);
	index = 0;
	n = nbr;
	neg = (sign && n < 0);
	if (neg)
		n = -nbr;
	while (n)
	{
		buffer[index++] = base[n % div];
		n /= div;
	}
	if (index == 0)
		buffer[index++] = base[0];
	if (negative)
		buffer[index++] = '-';
	buffer[index] = '\0';
	return (make_itoagstr(buffer));
}
