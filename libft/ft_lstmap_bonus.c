/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:41:59 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:48:07 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_lstmap crea una nueva lista enlazada aplicando la 
 * función f a cada elemento de la lista lst. 
 * Se utiliza la función del para liberar la memoria asignada a los elementos 
 * de la nueva lista en caso de error.
 * 
 * @param lst Puntero al primer elemento de la lista existente.
 * @param f Puntero a la función que se aplicará a cada elemento de la lista 
 * existente.
 * @param del Puntero a la función que libera la memoria de un elemento de la
 *  nueva lista en caso de error.
 * @return t_list* -> Puntero al primer elemento de la nueva lista.
 * NULL si ocurrió un error al asignar memoria o si la lista lst es NULL.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;

	if (lst == NULL)
		return (NULL);
	res = malloc(sizeof(t_list));
	if (res == NULL)
		return (NULL);
	res->content = f(lst->content);
	res->next = ft_lstmap(lst->next, f, del);
	return (res);
}
