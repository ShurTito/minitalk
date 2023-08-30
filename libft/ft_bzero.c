/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:13:32 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:24:15 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_bzero establece los primeros n bytes de la memoria 
 * apuntada por s a cero. 
 * Es comúnmente utilizada para inicializar o borrar un bloque de memoria.
 * 
 * @param s Puntero al bloque de memoria a modificar.
 * @param n Número de bytes a establecer a cero.
 */
void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*((char *)s) = 0;
		s++;
		n--;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int main()
{

	char str[10] = "hola";
	printf("%s",str);
	bzero(str, 2);
	printf("%s",str);
	return 0;
}
*/