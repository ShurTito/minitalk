/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:34:21 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:57:29 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compara dos cadenas de caracteres hasta un número máximo de caracteres
 * La función ft_strncmp compara los primeros n caracteres de las cadenas s1 y
 *  s2.
 * Devuelve un valor entero que indica la diferencia entre los caracteres en 
 * el siguiente orden:
 * Un valor negativo si s1 es menor que s2.
 * Cero si s1 es igual a s2.
 * Un valor positivo si s1 es mayor que s2.
 * 
 * @param s1 Cadena de caracteres a comparar.
 * @param s2 Cadena de caracteres a comparar.
 * @param n Número máximo de caracteres a comparar.
 * @return int -> Un valor entero que indica la diferencia entre las cadenas.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	dif;

	i = 0;
	dif = 0;
	while (i < n && s1[i] && s2[i] && dif == 0)
	{
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (dif == 0 && i < n)
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (dif);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void) {
	char leftStr[] = "hello wrld";
	char rightStr[] = "hello wr";
	int n = 50;
	int result = strncmp(leftStr, rightStr, n);
	if (result == 0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");
	printf("\nValue returned by strncmp() is: %d\n" , result);
	result = ft_strncmp(leftStr, rightStr, n);
	if (result == 0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");
	printf("\nValue returned by ft_strncmp() is: %d" , result);
	return (0);
}
*/