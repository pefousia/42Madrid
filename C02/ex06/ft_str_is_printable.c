/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefousia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:21:02 by pefousia          #+#    #+#             */
/*   Updated: 2022/11/17 21:53:56 by pefousia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	status;

	i = 0;
	if (str[i] == '\0' && i == 0)
	{
		status = 1;
	}
	while (str[i])
	{
		if (((str[i] >= ' ') && (str[i] <= 126)))
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

	i = ft_str_is_printable("");
	char c = i + 48;
	write (1, &c, 1);
	return 0;
}*/
