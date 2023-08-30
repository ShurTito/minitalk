/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:59:12 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 12:27:51 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Escribe una cadena de caracteres en un descriptor de archivo 
 * específico.
 * La función ft_putstr_fd toma una cadena de caracteres s y la escribe en el 
 * descriptor de archivo especificado. 
 * Utiliza la función write para realizar la escritura. 
 * La longitud de la cadena se determina utilizando la función ft_strlen.
 * 
 * @param s Cadena de caracteres a escribir.
 * @param fd Descriptor de archivo en el cual se realizará la escritura.
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
