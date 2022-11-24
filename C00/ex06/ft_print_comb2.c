/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefousia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:51:35 by pefousia          #+#    #+#             */
/*   Updated: 2022/11/08 19:06:07 by pefousia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2x2(int i, int j)
{
	char	uni;
	char	dec;

	if (i < j)
	{
		dec = ((i / 10) + 48);
		uni = ((i % 10) + 48);
		write(1, &dec, 1);
		write(1, &uni, 1);
		write(1, " ", 1);
		dec = ((j / 10) + 48);
		uni = ((j % 10) + 48);
		write(1, &dec, 1);
		write(1, &uni, 1);
		if (i < 98 && j <= 99)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		while (j <= 99)
		{
			ft_putchar2x2(i, j);
			j++;
		}
		j = 0;
		i++;
	}	
}
