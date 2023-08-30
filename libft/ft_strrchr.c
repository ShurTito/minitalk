/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:19:00 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:01:01 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Busca la última aparición de un carácter en una cadena.
 * La función ft_strrchr busca la última aparición del carácter c en la cadena s.
 * Devuelve un puntero a la última ocurrencia de c en s, o NULL si no se 
 * encuentra.
 * 
 * @param s Cadena de caracteres en la que buscar.
 * @param c Carácter que se busca.
 * @return char* -> Un puntero a la última aparición de `c` en `s`,
 *  o NULL si no se encuentra.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*str2;
	int		i;
	char	aux;

	aux = c;
	str = (char *)s;
	str2 = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == aux)
			str2 = str + i;
		i++;
	}
	if (aux == '\0')
		return (str + i);
	return (str2);
}
