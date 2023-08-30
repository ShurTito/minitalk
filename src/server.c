/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:26:33 by antferna          #+#    #+#             */
/*   Updated: 2023/08/30 16:10:16 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <signal.h>

void	handler(int sig)
{
	static unsigned char	buffer;
	static int				bit_count;

	if (bit_count < 8)
	{
		if (sig == SIGUSR1)
			buffer |= (1 << (7 - bit_count));
		bit_count++;
	}
	if (bit_count == 8)
	{
		if (buffer != '\0')
			ft_printf("%c", buffer);
		else
			ft_printf("\n");
		buffer = 0;
		bit_count = 0;
	}
}

int	main(void)
{
	ft_printf("El ID del servidor es: %d\n", getpid());
	signal(SIGUSR2, handler);
	signal(SIGUSR1, handler);
	while (1)
		pause();
	return (0);
}
