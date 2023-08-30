/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:36:43 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:47:23 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatena dos cadenas de caracteres de manera segura, limitando el
 *  tamaño del destino.
 * La función ft_strlcat concatena la cadena de caracteres src al final de la 
 * cadena dst, asegurándose de que el tamaño total no exceda dstsize. 
 * El parámetro dstsize indica el tamaño máximo del resultado final, incluyendo
 *  el espacio para el carácter nulo terminador.
 * Si la longitud de dst es mayor o igual a dstsize, la función devuelve la
 *  longitud de src más dstsize, indicando que se ha truncado la cadena. 
 * Si la longitud de dst es menor que dstsize, se concatenan los caracteres
 *  de src en dst y se agrega un carácter nulo terminador al final.
 * 
 * @param dst Cadena de caracteres de destino.
 * @param src Cadena de caracteres fuente a concatenar.
 * @param dstsize Tamaño máximo de la cadena de destino, incluyendo el carácter
 *  nulo terminador.
 * @return size_t -> La longitud total de la cadena resultante después de la 
 * concatenación, teniendo en cuenta las restricciones de tamaño y truncamiento.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendst;

	j = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (dstsize < 1)
		return (lensrc + dstsize);
	i = lendst;
	while (src[j] && (i < dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < lendst)
		return (lensrc + dstsize);
	else
		return (lendst + lensrc);
}
