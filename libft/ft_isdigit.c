/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:31:17 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:32:21 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_isdigit verifica si el carácter c es un dígito decimal,
 *  es decir, si se encuentra en el rango de '0' a '9'.
 * 
 * @param c Carácter a verificar.
 * @return int -> 1 si el carácter es un dígito decimal.
 * 0 si el carácter no es un dígito decimal.
 */
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
