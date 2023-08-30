/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:06:05 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:13:52 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Imprime un carácter en la salida estándar.
 * La función ft_putchar imprime el carácter especificado en la salida estándar.
 * Utiliza la función write para realizar la escritura en el descriptor de 
 * archivo 1, que representa la salida estándar.
 * 
 * @param c Carácter a imprimir.
 * @return int -> 1 si la escritura se realiza correctamente, -1 si se produce
 *  un error.
 */
int	ft_putchar(char c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}
