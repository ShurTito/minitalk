/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:08:55 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:44:12 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_lstlast devuelve un puntero al último elemento de la 
 * lista enlazada especificada por lst.
 * 
 * @param lst Puntero al primer elemento de la lista.
 * @return t_list* -> Puntero al último elemento de la lista.
 * NULL si la lista está vacía.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
