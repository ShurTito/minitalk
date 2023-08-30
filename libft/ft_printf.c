/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:30:09 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:11:52 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_form(va_list args, char *s)
{
	if (s[0] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s[0] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s[0] == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (s[0] == 'd' || s[0] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s[0] == 'u')
		return (ft_putuint(va_arg(args, unsigned int)));
	else if (s[0] == 'x')
		return (ft_puthex((unsigned int)va_arg(args, unsigned int)
				, "0123456789abcdef"));
	else if (s[0] == 'X')
		return (ft_puthex((unsigned int)va_arg(args, unsigned int)
				, "0123456789ABCDEF"));
	else if (s[0] == '%')
		return (ft_putchar('%'));
	return (0);
}

/**
 * @brief Imprime en la salida estándar la salida formateada basada en el 
 * especificador de formato.
 * La función ft_printf toma una cadena de formato y un número variable de 
 * argumentos, e imprime la salida formateada en la salida estándar.
 * Admite los siguientes especificadores de formato:
 * %c: Imprime un solo carácter.
 * %s: Imprime una cadena terminada en nulo.
 * %p: Imprime la dirección de memoria de un puntero.
 * %d o %i: Imprime un entero decimal con signo.
 * %u: Imprime un entero decimal sin signo.
 * %x: Imprime un entero hexadecimal sin signo en minúsculas.
 * %X: Imprime un entero hexadecimal sin signo en mayúsculas.
 * %%: Imprime el carácter '%'.
 * 
 * @param s Cadena de formato que contiene los especificadores de formato.
 * @param ... Argumentos variables correspondientes a los especificadores 
 * de formato.
 * @return int -> El número total de caracteres impresos, o -1 si se 
 * produce un error.
 */
int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		aux[3];

	aux[2] = 0;
	aux[0] = 0;
	va_start(args, s);
	while (s[aux[0]])
	{
		if (s[aux[0]] == '%')
		{
			aux[1] = ft_form(args, (char *)(s + ++aux[0]));
			if (aux[1] == -1)
				return (-1);
			aux[2] += aux[1];
		}
		else
		{
			if (ft_putchar(s[aux[0]]) == -1)
				return (-1);
			aux[2]++;
		}
		aux[0]++;
	}
	va_end(args);
	return (aux[2]);
}
