/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:40:12 by yde-goes          #+#    #+#             */
/*   Updated: 2023/03/20 21:19:02 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str);
static char	*ft_strcpy(char *dest, char *src);
static int	get_joined_len(int size, char **strs, int sep_len);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		len;
	char	*result;
	char	*join;

	if (!size)
		return (malloc(sizeof(char)));
	len = get_joined_len(size, strs, ft_strlen(sep));
	join = malloc(sizeof(char) * len);
	if (!join)
		return (NULL);
	result = join;
	index = -1;
	while (++index < size)
	{
		ft_strcpy(join, strs[index]);
		join += ft_strlen(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(join, sep);
			join += ft_strlen(sep);
		}
	}
	join[index] = '\0';
	return (result);
}

static int	get_joined_len(int size, char **strs, int sep_len)
{
	int	index;
	int	len;

	index = 0;
	len = size * (sep_len - 1);
	while (index < size)
	{
		len += ft_strlen(strs[index]);
		index++;
	}
	return (len);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

static int	ft_strlen(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
		count_size++;
	return (count_size);
}

/* #include <stdio.h>

int	main (void)
{
	char *teste[] = {"hi", "hello", "bonjour"};
	char *sep = "__Привет__";

	printf("%s\n", ft_strjoin(3, teste, sep));
	return (0);
} */
