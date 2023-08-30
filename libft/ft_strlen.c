/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:58:02 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:53:40 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calcula la longitud de una cadena de caracteres.
 * La función ft_strlen calcula la longitud de la cadena de caracteres s,
 *  es decir, cuenta el número de caracteres en s hasta encontrar el carácter 
 * nulo terminador.
 * 
 * @param s Cadena de caracteres de la cual se desea conocer la longitud.
 * @return size_t -> La longitud de la cadena de caracteres `s`.
 */
size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}
