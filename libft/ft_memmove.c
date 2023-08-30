/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:12:53 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 11:49:50 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copia n bytes del área de memoria src al área de memoria dest. 
 * Las áreas de memoria pueden solaparse.
 * 
 * @param dst destino al que copiar
 * @param src origen del que copiar
 * @param len numero de bytes a copiar
 * @return void* -> devuelve un puntero a dest
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	if (s < d)
		while (++i <= len)
			d[len - i] = s[len - i];
	else
	{
		while (len-- > 0)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
