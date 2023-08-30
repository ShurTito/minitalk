/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:51:09 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 11:39:25 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compara los primeros n bytes de las areas de memoria s1 y s2. Devuelve
 * un entero menor, igual a o mayor que cero si s1 es, respectivamente, menor,
 * igual o mayor que s2.
 * 
 * @param s1 primer puntero a comparar
 * @param s2 segundo puntero a comparar
 * @param n numero de bytes a comparar
 * @return int -> devuelve un entero menor, igual o mayor que cero si s1 es,
 *  respectivamente, menor, igual o mayor que s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else
			i++;
		n--;
	}
	return (n);
}
