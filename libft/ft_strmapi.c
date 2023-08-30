/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:53:15 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:56:14 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Aplica una función a cada carácter de una cadena y devuelve una nueva
 *  cadena con los resultados.
 * La función ft_strmapi aplica la función f a cada carácter de la cadena s y 
 * devuelve una nueva cadena con los resultados. 
 * Asigna dinámicamente memoria para la nueva cadena resultante.
 * 
 * @param s Cadena de caracteres de origen.
 * @param f Puntero a la función que se aplicará a cada carácter.
 * @return char* -> Un puntero a la nueva cadena resultante, o NULL si no se 
 * puede asignar memoria.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (str == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[ft_strlen(s)] = '\0';
	return (str);
}
