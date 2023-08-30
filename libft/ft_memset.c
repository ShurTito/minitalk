/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:07:59 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:10:50 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Rellena los primeros len bytes del área de memoria apuntada por b con 
 *  el byte constante c.
 * 
 * @param b puntero al lugar a rellenar
 * @param c caracter a rellenar
 * @param len numero de bytes a rellenar
 * @return void* 
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = b;
	while (len > 0)
	{
		*s = (unsigned char)c;
		s++;
		len--;
	}
	return (b);
}
