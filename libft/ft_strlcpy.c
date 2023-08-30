/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:12:39 by antferna          #+#    #+#             */
/*   Updated: 2023/04/19 16:35:58 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copia una cadena de caracteres en otra cadena de manera segura, 
 * limitando el tamaño del destino.
 * La función ft_strlcpy copia la cadena de caracteres src en la cadena dst, 
 * asegurándose de que el tamaño total no exceda dstsize. 
 * El parámetro dstsize indica el tamaño máximo del destino, incluyendo el 
 * espacio para el carácter nulo terminador.
 * La función calcula la longitud de src y la almacena en len. 
 * Si dstsize es menor que 1, la función simplemente devuelve la longitud de
 *  src. 
 * Si dstsize es mayor o igual a 1, se copian los caracteres de src en dst 
 * hasta dstsize - 1 o hasta que se alcance el carácter nulo terminador en src.
 * Luego se agrega un carácter nulo terminador al final de dst.
 * 
 * @param dst Cadena de caracteres de destino.
 * @param src Cadena de caracteres fuente a copiar.
 * @param dstsize Tamaño máximo de la cadena de destino, incluyendo el carácter
 *  nulo terminador.
 * @return size_t -> La longitud de `src`, es decir, el número de caracteres
 *  que se intentaron copiar.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (dstsize < 1)
		return (len);
	while (src[i] && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
