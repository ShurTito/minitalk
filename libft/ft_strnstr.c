/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:14:30 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 14:58:32 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Encuentra la primera aparición de una subcadena en una cadena dada,
 *  con una longitud máxima especificada.
 * La función ft_strnstr busca la primera aparición de la subcadena needle 
 * dentro de la cadena haystack, hasta un máximo de len caracteres en haystack.
 * Devuelve un puntero a la primera ocurrencia de needle en haystack,
 *  o NULL si no se encuentra ninguna coincidencia.
 * 
 * @param haystack Cadena de caracteres en la que buscar.
 * @param needle Subcadena que se busca.
 * @param len Longitud máxima de la cadena `haystack` a considerar.
 * @return char* -> Un puntero a la primera aparición de `needle` en `haystack`,
 *  o NULL si no se encuentra ninguna coincidencia.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (len > (i + j) && haystack[i + j] == needle[j])
			{
				j++;
				if (ft_strlen(needle) == j)
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void) {
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Baz";
	char	*ptr;
	size_t len = 12;

	ptr = strnstr(largestring, smallstring, len);
	printf("%s\n", ptr);

	ptr = ft_strnstr(largestring,smallstring, len);
	printf("%s\n", ptr);	
	return (0);
}*/
