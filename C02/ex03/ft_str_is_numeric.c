/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefousia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:26:08 by pefousia          #+#    #+#             */
/*   Updated: 2022/11/11 21:26:13 by pefousia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	status;

	status = 1;
	i = 0;
	if (str[i] == '\0' && i == 0)
	{
		return (1);
	}
	while (str[i] != '\0' && status == 1)
	{
		if (((str[i] >= '0') && (str[i] <= '9')))
		{
			status = 1;
		}
		else
		{
			status = 0;
		}
		i++;
	}
	return (status);
}

/*int	main(void)
{
	int	i;

	i = ft_str_is_numeric("");
	char c = i + 48;
	write (1, &c, 1);
	return 0;
}*/