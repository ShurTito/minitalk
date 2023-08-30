/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:45:40 by antferna          #+#    #+#             */
/*   Updated: 2023/06/30 16:58:21 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_free_nl(char **s)
{
	free(*s);
	*s = NULL;
	return (NULL);
}

static char	*ft_clean(char *stored)
{
	char	*aux;
	char	*endpos;
	int		i;

	endpos = ft_strchr_nl(stored, '\n');
	if (!endpos)
	{
		aux = NULL;
		return (ft_free_nl(&stored));
	}
	else
		i = (endpos - stored) + 1;
	if (!stored[i])
		return (ft_free_nl(&stored));
	aux = ft_substr_nl(stored, i, ft_strlen_nl(stored) - i);
	ft_free_nl(&stored);
	if (!aux)
		return (NULL);
	return (aux);
}

static char	*ft_next_line(char *stored)
{
	char	*line;
	char	*endpos;
	int		i;

	endpos = ft_strchr_nl(stored, '\n');
	i = (endpos - stored) + 1;
	line = ft_substr_nl(stored, 0, i);
	if (!line)
		return (NULL);
	return (line);
}

static char	*ft_readbuffer(int fd, char *stored)
{
	char	*buffer;
	int		nbytes;

	nbytes = 1;
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (ft_free_nl(&stored));
	buffer[0] = '\0';
	while (nbytes > 0 && !ft_strchr_nl(buffer, '\n'))
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		if (nbytes > 0)
		{
			buffer[nbytes] = '\0';
			stored = ft_strjoin_nl(stored, buffer);
		}
	}
	free(buffer);
	if (nbytes == -1)
		return (ft_free_nl(&stored));
	return (stored);
}

/**
 * @brief La función get_next_line lee una línea completa desde el descriptor 
 * de archivo especificado por fd. 
 * Cada llamada a la función obtiene la siguiente línea del archivo hasta 
 * que se alcance el final del archivo o se produzca un error.
 * 
 * @param fd El descriptor de archivo del cual leer la línea
 * @return char* -> Si se lee correctamente una línea, se devuelve un puntero
 *  a un string que contiene la línea. 
 * Si se alcanza el final del archivo, se devuelve un puntero a un string
 *  vacío ("").
 * Si se produce un error, se devuelve NULL.
 */
char	*get_next_line(int fd)
{
	static char	*stored[2048];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if ((stored[fd] && !ft_strchr_nl(stored[fd], '\n')) || !stored[fd])
		stored[fd] = ft_readbuffer(fd, stored[fd]);
	if (stored[fd] == NULL)
		return (NULL);
	line = ft_next_line(stored[fd]);
	if (line == NULL)
		return (ft_free_nl(&stored[fd]));
	stored[fd] = ft_clean(stored[fd]);
	return (line);
}
