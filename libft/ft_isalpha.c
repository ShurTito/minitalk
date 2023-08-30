/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:11:57 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:32:34 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_isalpha verifica si el carácter c es una letra del 
 * alfabeto. 
 * Se considera una letra si es una letra mayúscula (A-Z) o minúscula (a-z).
 * 
 * @param c Carácter a verificar.
 * @return int -> 1 si el carácter es una letra.
 * 0 si el carácter no es una letra.
 */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
