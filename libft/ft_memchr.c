/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:24:46 by antferna          #+#    #+#             */
/*   Updated: 2023/05/12 17:45:20 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Rastrea los primeros n bytes del área de memoria apuntada por s 
 * buscando el carácter c.  La operación acaba al llegarse al primer byte que
 *  concuerde con c (interpretado como un carácter sin signo).
 * 
 * @param s área de memoria a buscar
 * @param c carácter a buscar
 * @param n numero de bytes a buscar
 * @return void* -> un puntero al byte que concuerda, o NULL si el carácter
 *  no está en el área de memoria especificada.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	cp;

	p = (unsigned char *)s;
	cp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == cp)
			return (&p[i]);
		i++;
	}
	return (0);
}
