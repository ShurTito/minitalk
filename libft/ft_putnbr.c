/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:07:11 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:22:55 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Imprime un número entero en la salida estándar.
 * La función ft_putnbr toma un número entero n y lo imprime en la salida 
 * estándar.
 * Utiliza la función ft_putchar para escribir los dígitos individuales del 
 * número.
 * 
 * @param n Número entero a imprimir.
 * @return int -> El número total de caracteres impresos, o -1 si se produce
 *  un error.
 */
int	ft_putnbr(int n)
{
	int	aux[2];

	aux[0] = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (n < 0)
	{
		if (ft_putchar('-') != 1)
			return (-1);
		n = -n;
		aux[0]++;
	}
	if (n > 9)
	{
		aux[1] = ft_putnbr(n / 10);
		if (aux[1] == -1)
			return (-1);
		aux[0] += aux[1];
		n = n % 10;
	}
	if (ft_putchar(n + '0') == -1)
		return (-1);
	aux[0]++;
	return (aux[0]);
}
