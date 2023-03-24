/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:07:30 by yde-goes          #+#    #+#             */
/*   Updated: 2023/03/24 19:38:53 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		index;
	int		len;
	int		*matrix;

	if (min >= max)
		return (0);
	len = max - min;
	matrix = malloc(sizeof(range) * len);
	if (!matrix)
	{
		*range = NULL;
		return (-1);
	}
	index = 0;
	while (index < len)
	{
		matrix[index] = min + index;
		index++;
	}
	*range = matrix;
	return (len);
}
