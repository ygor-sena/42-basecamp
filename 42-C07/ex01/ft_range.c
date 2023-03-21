/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:52:42 by yde-goes          #+#    #+#             */
/*   Updated: 2023/03/20 19:09:58 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		index;
	int		len;
	int		*range;

	if (min >= max)
		return (NULL);
	len = max - min;
	range = malloc(sizeof(range) * len);
	if (!range)
		return (NULL);
	index = 0;
	while (index < len)
	{
		range[index] = min + index;
		index++;
	}
	return (range);
}
