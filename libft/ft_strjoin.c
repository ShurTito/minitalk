/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:06:13 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:44:23 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Une dos cadenas de caracteres en una nueva cadena.
 * La función ft_strjoin toma dos cadenas de caracteres s1 y s2 y las une en
 *  una nueva cadena.
 * Asigna dinámicamente memoria para la nueva cadena que contendrá la 
 * concatenación de s1 y s2.
 * Devuelve un puntero a la nueva cadena resultante.
 * 
 * @param s1 Primera cadena de caracteres.
 * @param s2 Segunda cadena de caracteres.
 * @return char* -> Un puntero a la nueva cadena resultante, o NULL si no
 *  se puede asignar memoria.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
