/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:19:01 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:02:22 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	front_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		flag;

	i = 0;
	flag = 0;
	while (i < ft_strlen(s1) && flag == 0)
	{
		j = 0;
		flag = 1;
		while (j < ft_strlen(set))
			if (set[j++] == s1[i])
				flag = 0;
		if (flag == 0)
			i++;
	}
	return (i);
}

/**
 * @brief Elimina los caracteres de un conjunto especificado al principio 
 * y al final de una cadena.
 * La función ft_strtrim recorta los caracteres contenidos en set al principio
 *  y al final de la cadena s1.
 * Devuelve una nueva cadena recortada.
 * 
 * @param s1 Cadena de caracteres a recortar.
 * @param set Conjunto de caracteres a recortar.
 * @return char* -> Una nueva cadena recortada que no contiene los caracteres 
 * de `set` al principio y al final.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		flag;

	i = front_trim(s1, set);
	k = ft_strlen(s1);
	flag = 0;
	while (k > i && flag == 0)
	{
		j = 0;
		flag = 1;
		while (j < ft_strlen(set))
			if (set[j++] == s1[k - 1])
				flag = 0;
		if (flag == 0)
			k--;
	}
	return (ft_substr(s1, i, k - i));
}
