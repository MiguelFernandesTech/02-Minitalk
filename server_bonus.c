/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:09:18 by migmarti          #+#    #+#             */
/*   Updated: 2023/01/06 16:06:13 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	handler(int signal, siginfo_t *info, void *ucontext)
{
	static unsigned char	c;
	static int				i;

	(void)ucontext;
	if (signal == SIGUSR1)
		c = (1 << i) | c;
	i++;
	if (i == 8)
	{
		write (1, &c, 1);
		if (c == '\0')
		{
			usleep(100);
			kill(info->si_pid, SIGUSR1);
		}
	c = 0;
	i = 0;
	}
}

int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	act;

	act.sa_sigaction = &handler;
	act.sa_flags = SA_SIGINFO;
	pid = getpid();
	(void)argv;
	if (argc != 1)
	{
		ft_printf("INVALID.\n");
		return (0);
	}
	ft_printf("PID: %d.\n", pid);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
