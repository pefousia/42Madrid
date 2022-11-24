/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefousia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:07:38 by pefousia          #+#    #+#             */
/*   Updated: 2022/11/09 19:11:37 by pefousia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int *size)
{
	int	i;
	int	aux;

	i = 0;
	while (i <= (*size / 2))
	{
		aux = tab[i];
		tab[i] = tab[*size  - 1 - i];
		tab[*size - i - 1] = aux;
		i++;
	}
	i = 0;
	while (tab[i])
	{
		write(1, &tab[i], 1);
		i++;
	}
}
