/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:14:47 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:37:17 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_lstadd_front añade el elemento new al frente de la lista
 *  enlazada especificada por lst. 
 * El puntero lst se actualiza para apuntar al nuevo primer elemento de la lista.
 * 
 * @param lst Puntero al puntero al primer elemento de la lista.
 * @param new Puntero al elemento a añadir al frente de la lista.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
