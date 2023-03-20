/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:43:43 by yde-goes          #+#    #+#             */
/*   Updated: 2023/03/20 19:09:46 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		len;
	int		index;
	char	*dup;

	len = ft_strlen(src) + 1;
	dup = malloc(sizeof(dup) * len);
	if (!dup)
		return (NULL);
	index = 0;
	while (index < len)
	{
		dup[i] = src[i];
		index++;
	}
	return (dup);
}

static int	ft_strlen(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
		count_size++;
	return (count_size);
}
