/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:54:48 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:12:39 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convierte un carácter en mayúscula.
 * La función ft_toupper convierte el carácter c en mayúscula si es una letra
 *  minúscula.
 * Si c no es una letra minúscula, se devuelve sin cambios.
 * 
 * @param c Carácter a convertir.
 * @return int -> El carácter convertido a mayúscula, o el mismo carácter si 
 * no es una letra minúscula.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
