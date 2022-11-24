/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefousia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:21:02 by pefousia          #+#    #+#             */
/*   Updated: 2022/11/11 22:23:06 by pefousia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	status;

	i = 0;
	if (str[i] == '\0' && i == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')))
		{
			status = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (status);
}

/*int	main(void)
{
	int i;

	i = ft_str_is_alpha("");
	char c = i + 48;
	write (1, &c, 1);
	return 0;
}*/