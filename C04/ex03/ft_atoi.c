/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefousia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:31:36 by pefousia          #+#    #+#             */
/*   Updated: 2022/11/24 19:31:49 by pefousia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	num;

	neg = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' 
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		str++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		str++;
	}
	while (str[i] > '0' && str[i] < '9')
	{
		num = (num * 10) + (str[i] - '0');
		str++;
	}
	return (num * neg);
}

/*int	main(void)
{
	char	str[] = " ---+--+1234ab567";
	int	num = ft_atoi(str);
	printf("%i", num);
}*/