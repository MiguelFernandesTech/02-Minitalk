/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:41:08 by migmarti          #+#    #+#             */
/*   Updated: 2023/01/06 16:07:11 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(unsigned char c, int pid)
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

int	main(int argc, char **argv)
{
	int		pid;
	int		i;

	i = 0;
	pid = ft_atoi(argv[1]);
	if (argc != 3)
		ft_printf("Invalid Arguments.\n");
	while (argv[2][i] != '\0')
	{
		handler(argv[2][i], pid);
		i++;
	}
	handler('\n', pid);
	return (0);
}
