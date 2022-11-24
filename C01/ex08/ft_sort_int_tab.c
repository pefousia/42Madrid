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

void	ft_sort_int_tab(int *tab, int size) /*tab [8, 9, 10, 7, 6, 5, 4, 3, 2, 1]*/
{
	int i;
	int pos;
	int aux;
	int min;

	pos = 0;
	i = 0;
	while (i < size) /*0 < 10*/
	{
		min = i;// 0
		pos = i + 1;// 1
		while (pos < size) /*1 < 10*/
		{
			if (tab[pos] < tab[min]) /*9 < 10*/
			{
				min = pos; /*min = 1*/
			}
			pos++;/*pos = 2*/
		}
		aux = tab[i];/*aux = tab[0] = 10*/
		tab[i] = tab[min];/*tab[0] = tab[1] = 1*/
		tab[min] = aux;/*tab[1] = 10*/
		i++;/*i = i +1 = 2*/
	}
}