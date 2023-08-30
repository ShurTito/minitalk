/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:52:44 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:33:32 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_isprint verifica si el carácter c es un carácter 
 * imprimible. 
 * Se considera un carácter imprimible si tiene una representación gráfica y 
 * es visible en la salida.
 * 
 * @param c Carácter a verificar.
 * @return int -> 1 si el carácter es imprimible.
 * 0 si el carácter no es imprimible.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
