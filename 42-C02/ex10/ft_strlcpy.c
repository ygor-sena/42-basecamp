/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:30:45 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/20 16:57:10 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

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

unsigned int	ft_strlen(char *str)
{
	unsigned int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		count_size++;
	}
	return (count_size);
}
