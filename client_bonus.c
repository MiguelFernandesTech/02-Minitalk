/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:09:15 by migmarti          #+#    #+#             */
/*   Updated: 2023/01/06 16:08:30 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	spechar(unsigned char c, int pid)
{
	int		bit;

	bit = 0;
	while (bit < 8)
	{
		if ((1 << bit) & c)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

void	cinfo(int signo, siginfo_t *info, void *context)
{
	(void)context;
	(void)info;
	(void)signo;
	ft_printf("Message received.\n");
	exit(0);
}

int	main(int argc, char **argv)
{
	int					pid;
	int					i;
	struct sigaction	act;

	act.sa_sigaction = &cinfo;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, NULL);
	sigemptyset(&act.sa_mask);
	i = 0;
	pid = ft_atoi(argv[1]);
	if (argc != 3)
		ft_printf("Invalid Arguments.\n");
	while (argv[2][i] != '\0')
	{
		spechar(argv[2][i], pid);
		i++;
	}
	spechar('\n', pid);
	spechar('\0', pid);
	while (1)
		pause();
	return (0);
}
