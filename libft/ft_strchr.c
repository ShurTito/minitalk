/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:09:59 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:36:18 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Busca la primera aparición de un carácter en una cadena de caracteres.
 * La función ft_strchr busca la primera aparición del carácter c en la cadena
 *  de caracteres s.
 * Devuelve un puntero al carácter encontrado en s, o NULL si el carácter no se
 *  encuentra.
 * Si c es el carácter nulo '\0', la función devuelve un puntero al final de la
 *  cadena s.
 * 
 * @param s Cadena de caracteres en la cual buscar.
 * @param c Carácter a buscar.
 * @return char* -> Un puntero al carácter encontrado en `s`, o NULL si no se
 *  encuentra.
 */
char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	aux;

	aux = c;
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == aux)
			return (str + i);
		i++;
	}
	if (aux == '\0')
		return (str + i);
	return (0);
}
