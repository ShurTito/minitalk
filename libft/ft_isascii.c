/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:49:18 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:31:02 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_isascii verifica si el valor entero c corresponde a 
 * un carácter ASCII válido. 
 * Un carácter ASCII válido se encuentra en el rango de 0 a 127, inclusive.
 * 
 * @param c Valor entero a verificar.
 * @return int -> 1 si el valor entero corresponde a un carácter ASCII válido.
 * 0 si el valor entero no corresponde a un carácter ASCII válido.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
