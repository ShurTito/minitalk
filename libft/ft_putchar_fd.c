/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:52:18 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:10:48 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Escribe un carácter en un descriptor de archivo específico.
 * La función ft_putchar_fd toma un carácter y lo escribe en el descriptor de 
 * archivo especificado. Utiliza la función write para realizar la escritura.
 * 
 * @param c carácter a escribir.
 * @param fd descriptor de archivo en el cual se realizará la escritura.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
