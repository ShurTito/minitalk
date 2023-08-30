/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:00:30 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:11:36 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convierte un carácter en minúscula.
 * La función ft_tolower convierte el carácter c en minúscula si es una letra
 *  mayúscula.
 * Si c no es una letra mayúscula, se devuelve sin cambios.
 * 
 * @param c Carácter a convertir.
 * @return int -> El carácter convertido a minúscula, o el mismo carácter 
 * si no es una letra mayúscula.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
