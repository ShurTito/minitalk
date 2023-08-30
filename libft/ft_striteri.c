/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:40:23 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:42:39 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Aplica una función a cada carácter de una cadena de caracteres,
 *  pasando su índice como argumento.
 * La función ft_striteri toma una cadena de caracteres s y un puntero a una 
 * función f que toma como argumentos el índice del carácter y un puntero al 
 * carácter correspondiente.
 * Itera sobre cada carácter de la cadena y aplica la función f a cada uno, 
 * pasando su índice.
 * La función f puede realizar cualquier operación deseada en el carácter, 
 * según el índice.
 * 
 * @param s Cadena de caracteres a iterar.
 * @param f Puntero a una función que toma un índice y un puntero al
 *  carácter correspondiente.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
