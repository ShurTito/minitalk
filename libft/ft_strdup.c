/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:45:33 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:37:51 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplica una cadena de caracteres en una nueva área de memoria.
 * La función ft_strdup toma una cadena de caracteres s1 y crea una copia 
 * exacta de la cadena en una nueva área de memoria asignada dinámicamente. 
 * Devuelve un puntero a la nueva cadena duplicada.
 * Si no se puede asignar memoria, la función devuelve NULL.
 * 
 * @param s1 Cadena de caracteres a duplicar.
 * @return char* -> Un puntero a la nueva cadena duplicada, o NULL si no se
 *  puede asignar memoria.
 */
char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
