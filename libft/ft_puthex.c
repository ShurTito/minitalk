/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:38:43 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:29:08 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Imprime un número hexadecimal en la salida estándar utilizando una 
 * base especificada.
 * La función ft_puthex toma un número en formato hexadecimal n y lo imprime 
 * en la salida estándar.
 * Utiliza una base especificada por el parámetro base, que define los dígitos
 *  válidos en la representación hexadecimal.
 * La función realiza la conversión recursivamente dividiendo n por 16 hasta 
 * que n sea menor que 16. 
 * Luego, imprime el dígito correspondiente en base al resto de la división.
 * La función también realiza un seguimiento del número total de caracteres
 *  impresos.
 * 
 * @param n Número en formato hexadecimal a imprimir.
 * @param base Cadena de caracteres que define los dígitos válidos en la 
 * representación hexadecimal.
 * @return int -> El número total de caracteres impresos, o -1 si se produce
 *  un error.
 */
int	ft_puthex(unsigned long long n, char *base)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = ft_puthex(n / 16, base);
		if (i == -1)
			return (-1);
		if (ft_putchar(base[n % 16]) == -1)
			return (-1);
		i++;
	}
	else if (n < 16)
	{
		if (ft_putchar(base[n]) == -1)
			return (-1);
		i++;
	}
	return (i);
}
