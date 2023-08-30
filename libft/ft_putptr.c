/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:02:48 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:25:49 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_aux_ptr(unsigned long long p, char *base, int i)
{
	if (p >= 16)
	{
		i = ft_aux_ptr(p / 16, base, i);
		if (i == -1)
			return (-1);
		if (ft_putchar(base[p % 16]) == -1)
			return (-1);
		i++;
	}
	else if (p < 16)
	{
		if (ft_putchar(base[p]) == -1)
			return (-1);
		i++;
	}
	return (i);
}

/**
 * @brief Imprime la dirección de memoria de un puntero en la salida estándar.
 * La función ft_putptr toma un puntero ptr y imprime su dirección de memoria
 *  en la salida estándar.
 * 
 * @param ptr Puntero cuya dirección de memoria se imprimirá.
 * @return int -> El número total de caracteres impresos, o -1 si se produce
 *  un error.
 */
int	ft_putptr(void *ptr)
{
	unsigned long long	p;
	int					i;

	p = (unsigned long long)ptr;
	i = 0;
	if (ft_putstr("0x") != 2)
		return (-1);
	i = ft_aux_ptr(p, "0123456789abcdef", i);
	return (i + 2);
}
