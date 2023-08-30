/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:03:07 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:39:53 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_lstclear borra y libera la memoria de todos los 
 * elementos de la lista enlazada especificada por lst. 
 * Se utiliza la función del para liberar la memoria asignada al contenido de 
 * cada elemento.
 * 
 * @param lst Puntero al puntero al primer elemento de la lista.
 * @param del Puntero a la función que libera la memoria del contenido de un 
 * elemento.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*next;

	aux = *lst;
	while (aux)
	{
		next = aux->next;
		del(aux->content);
		free(aux);
		aux = next;
	}
	*lst = NULL;
}
