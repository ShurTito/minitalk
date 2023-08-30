/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:02:55 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:47:14 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_lstnew crea un nuevo elemento de lista y asigna el 
 * puntero content al campo content del elemento. 
 * El campo next se establece en NULL.
 * 
 * @param content Puntero al contenido que se asignará al nuevo elemento de 
 * lista.
 * @return t_list* -> Puntero al nuevo elemento de lista.
 * NULL si ocurrió un error al asignar memoria.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = (void *)content;
	list->next = NULL;
	return (list);
}
