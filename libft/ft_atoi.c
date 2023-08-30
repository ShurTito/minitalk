/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:40:17 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:23:08 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_atoi convierte la cadena de caracteres str en un número
 *  entero. 
 * La cadena puede contener espacios en blanco al principio, un signo opcional
 *  ('+' o '-') y caracteres numéricos. 
 * La conversión se detiene al encontrar un carácter no numérico. 
 * Si el número resultante excede los límites del tipo de dato int, se devolverá
 *  el valor máximo o mínimo según corresponda.
 * 
 * @param str La cadena de caracteres a convertir.
 * @return int -> El número entero resultante de la conversión.
 */
int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	res;
	unsigned long		limit;

	i = 0;
	sign = 1;
	res = 0;
	limit = 9223372036854775807;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
			i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i++] - '0');
		if (res > limit && sign == 1)
			return (-1);
		if (res > (limit + 1) && sign == -1)
			return (0);
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char cadena[] ="  \n \v \t \f \r 4775807aadfsdfsa567";
	int n = ft_atoi(cadena);
	printf("%d\n", n);
	int n2 = atoi(cadena);
	printf("%d\n", n2);

	return (0);
}*/
