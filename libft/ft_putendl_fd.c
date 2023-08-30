/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:03:34 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:29:57 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Escribe una cadena de caracteres seguida de un salto de línea en un
 *  descriptor de archivo específico. La función ft_putendl_fd toma una cadena 
 * de caracteres y la escribe en el descriptor de archivo especificado, seguida
 *  de un salto de línea. Utiliza la función write para realizar la escritura.
 * La longitud de la cadena se determina utilizando la función ft_strlen.
 * 
 * @param s Cadena de caracteres a escribir.
 * @param fd Descriptor de archivo en el cual se realizará la escritura.
 */
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
