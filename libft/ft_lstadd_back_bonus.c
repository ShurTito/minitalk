/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:18:23 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:36:13 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_lstadd_back añade el elemento new al final de la lista
 *  enlazada especificada por lst. 
 * Si la lista está vacía, el elemento new se convierte en el primer elemento 
 * de la lista.
 * 
 * @param lst Puntero al puntero al primer elemento de la lista.
 * @param new Puntero al elemento a añadir al final de la lista.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = lst[0];
	if (!aux)
		lst[0] = new;
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
}
