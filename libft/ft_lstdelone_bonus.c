/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:51:44 by antferna          #+#    #+#             */
/*   Updated: 2023/05/15 15:40:57 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief La función ft_lstdelone borra y libera la memoria del elemento lst 
 * de la lista enlazada. 
 * Se utiliza la función del para liberar la memoria asignada al contenido 
 * del elemento.
 * 
 * @param lst Puntero al elemento a borrar y liberar.
 * @param del Puntero a la función que libera la memoria del contenido del 
 * elemento.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
