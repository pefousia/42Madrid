/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefousia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:16:21 by pefousia          #+#    #+#             */
/*   Updated: 2022/11/12 19:16:24 by pefousia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allheaders.h"
#include <unistd.h>

int	ft_check_numbers(char *argv, int i)
{
	int	size;

	i = 0;
	size = ((sizeof(argv) + 1) / 2) / 4;
	while (i < size)
	{
		if (i == 0)
		{
			
		}
		else if (i == size - 1)
		{

		}
		else
		{

		}
	}
	
}

int	ft_continue_check(char *argv, int i)
{
	if (i != sizeof(argv) || (i % 2 == 0 && argv[i] == ' '))
	{
		write(1, "Error", 5);
		return (0);
	}
	ft_check_numbers(argv, i);
	return (0);
}

int	ft_check(int argc, char *argv)
{
	int	i;

	i = 0;
	if (argc != 2 || argv == '\0' || argv[sizeof(argv) - 1] == ' ')
	{
		write(1, "Error", 5);
		return (0);
	}
	while (argv[i])
	{
		if ((argv[i] >= '1' && argv[i] <= '4') || argv[i] != ' ')
		{
			write(1, "Error", 5);
			return (0);
		}
		else if ((i % 2 == 1) && argv[i] != ' ')
		{
			write(1, "Error", 5);
			return (0);
		}
		i++;
	}
	ft_continue_check(argv, i);
	return(0);
}
