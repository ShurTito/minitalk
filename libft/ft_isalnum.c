/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:36:21 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:26:58 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_isalnum verifica si el carácter c es alfanumérico. 
 * Un carácter se considera alfanumérico si es una letra (mayúscula o minúscula)
 *  o un dígito.
 * 
 * @param c Carácter a verificar.
 * @return int -> 1 si el carácter es alfanumérico.
 * 0 si el carácter no es alfanumérico.
 */
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
