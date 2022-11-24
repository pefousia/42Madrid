/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_permutations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefousia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:19:16 by pefousia          #+#    #+#             */
/*   Updated: 2022/11/13 13:19:19 by pefousia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_permute_rows(char **matrix)
{
	int	i;
	int	j;
	int	size; 
	char	*aux;

	size = sizeof(matrix[0]);
	i = 0;
	j = 0;
	while (i < size)
	{
		while ( j < size)
		{
			if (j != i)
			{
				aux = matrix[i];
				matrix[i] = matrix[j];
				matrix[j] = aux;
			}

		}
		
	}
	
}

void	ft_permute_colls(char **matrix)
{

}

void	ft_permutations(char **matrix)
{
	int	i;
	int	j;
}
