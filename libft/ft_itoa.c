/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:16:42 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:35:01 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnbr(long n)
{
	int	count;

	count = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/**
 * @brief La función ft_itoa convierte el entero n en una cadena de caracteres
 *  correspondiente a su representación decimal. 
 * La cadena de caracteres resultante se asigna dinámicamente y debe ser 
 * liberada por el usuario después de su uso.
 * 
 * @param n Entero a convertir en cadena de caracteres.
 * @return char* -> Puntero a la cadena de caracteres resultante,
 *  o NULL si no se pudo asignar memoria.
 */
char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	str = (char *)malloc(countnbr(nbr) + 1);
	if (str == NULL)
		return (NULL);
	i = countnbr(nbr) - 1;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 9)
	{
		str[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (nbr >= 0)
		str[i] = nbr + '0';
	str[countnbr(n)] = '\0';
	return (str);
}
