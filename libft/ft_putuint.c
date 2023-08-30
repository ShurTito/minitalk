/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:20:32 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:31:04 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Imprime un número entero sin signo en la salida estándar.
 * La función ft_putuint toma un número entero sin signo n y lo imprime en la 
 * salida estándar.
 * Realiza la conversión recursivamente dividiendo n por 10 hasta que n sea 
 * menor que 10.
 * Utiliza la función ft_putchar para escribir los dígitos individuales del 
 * número.
 * 
 * @param n Número entero sin signo a imprimir.
 * @return int -> El número total de caracteres impresos, o -1 si se produce
 *  un error.
 */
int	ft_putuint(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i = ft_putuint(n / 10);
		if (i == -1)
			return (-1);
		n = n % 10;
	}
	if (ft_putchar(n + '0') == -1)
		return (-1);
	i++;
	return (i);
}
