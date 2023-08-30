/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:26:56 by antferna          #+#    #+#             */
/*   Updated: 2023/08/30 16:13:50 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <signal.h>

void	handler(int sig, siginfo_t *info, void *ucontext)
{
	static unsigned char	buffer;
	static int				bit_count;

	(void)ucontext;
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
	if (sig == SIGUSR1)
		kill(info->si_pid, SIGUSR1);
	else if (sig == SIGUSR2)
		kill(info->si_pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = &handler;
	sa.sa_flags = SA_SIGINFO;
	ft_printf("El ID del servidor es: %d\n", getpid());
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
