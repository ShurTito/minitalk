/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:26:46 by antferna          #+#    #+#             */
/*   Updated: 2023/08/30 16:42:57 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <signal.h>

void	sending_signal(int pid, unsigned char octet)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((octet >> i & 1) == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(50);
		i--;
	}
}

void	handler(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("1");
	else if (signal == SIGUSR2)
		ft_printf("0");
}

int	main(int argc, char **argv)
{
	int		server_id;
	int		i;
	char	*str;

	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	if (argc != 3)
	{
		ft_printf("Format: %s <pid> <msg>\n", argv[0]);
		return (0);
	}
	server_id = ft_atoi(argv[1]);
	str = argv[2];
	i = 0;
	while (str[i])
	{
		sending_signal(server_id, (unsigned char)str[i]);
		i++;
	}
	sending_signal(server_id, '\0');
	ft_printf("\n");
	return (0);
}
