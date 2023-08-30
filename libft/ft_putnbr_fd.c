/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:06:23 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:22:08 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Escribe un número entero en un descriptor de archivo específico.
 * La función ft_putnbr_fd toma un número entero n y lo escribe en el 
 * descriptor de archivo especificado. 
 * Utiliza la función ft_putchar_fd para escribir los dígitos individuales 
 * del número. 
 * 
 * @param n Número entero a escribir.
 * @param fd Descriptor de archivo en el cual se realizará la escritura.
 */
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + '0'), fd);
}
