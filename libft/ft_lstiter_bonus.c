/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:35:08 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:44:13 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_lstiter aplica la función f a cada elemento de la lista
 *  enlazada especificada por lst. 
 * La función f se aplica secuencialmente a cada contenido de los elementos 
 * de la lista.
 * 
 * @param lst Puntero al primer elemento de la lista.
 * @param f Puntero a la función a aplicar a cada contenido de los elementos.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
