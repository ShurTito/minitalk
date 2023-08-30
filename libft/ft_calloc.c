/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:18:41 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:25:55 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_calloc asigna un bloque de memoria para un total de 
 * count elementos, cada uno de tamaño size bytes. 
 * El bloque de memoria asignado es inicializado a cero.
 * 
 * @param count Número de elementos a asignar.
 * @param size Tamaño en bytes de cada elemento.
 * @return void* -> Puntero al bloque de memoria asignado,
 *  o NULL si no se pudo asignar memoria.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = (void *)malloc(count * size);
	if (res == NULL)
		return (NULL);
	else
	{
		ft_bzero(res, (count * size));
		return (res);
	}
}
