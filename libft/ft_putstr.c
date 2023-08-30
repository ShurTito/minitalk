/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:56:12 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:29:05 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Imprime una cadena de caracteres en la salida estándar.
 * La función ft_putstr toma una cadena de caracteres str y la imprime en la 
 * salida estándar.
 * Utiliza la función write para realizar la escritura de caracteres 
 * individuales.
 * Si la cadena es NULL, imprime la cadena "(null)" en su lugar.
 * 
 * @param str Cadena de caracteres a imprimir.
 * @return int -> El número total de caracteres impresos, o -1 si se 
 * produce un error.
 */
int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		if (write(1, "(null)", 6) != 6)
			return (-1);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		if (write(1, &str[i], 1) != 1)
			return (-1);
		i++;
	}
	return (i);
}
