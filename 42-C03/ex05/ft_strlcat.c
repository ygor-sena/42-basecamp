/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:02:46 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/22 20:28:53 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	count_size;
	int				cpy_is_poss;

	count_size = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	cpy_is_poss = size - dest_length;
	if (cpy_is_poss <= 1)
		return (dest_length + src_length);
	else
	{
		while (src[count_size] != '\0' || cpy_is_poss >= 0)
		{
			dest[dest_length + count_size] = src[count_size];
			count_size++;
			cpy_is_poss--;
			if ((dest_length + count_size) == size - 1)
			{
				dest[dest_length + count_size] = '\0';
				return (dest_length + src_length);
			}	
		}
	}
	return (dest_length + src_length);
}

int	ft_strlen(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		count_size++;
	}
	return (count_size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count_size;

	count_size = 0;
	if (size == 0)
		return (ft_strlen(src));
	else if (size > 0)
	{
		while (src[count_size] != '\0')
		{
			if (count_size == size - 1)
			{
				dest[count_size] = '\0';
				return (ft_strlen(src));
			}
			dest[count_size] = src[count_size];
			count_size++;
		}
	}
	dest[count_size] = '\0';
	return (ft_strlen(src));
}