/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:07:41 by yde-goes          #+#    #+#             */
/*   Updated: 2023/04/06 23:14:35 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

static int	ft_strlen(char *str);
static char	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*stk;

	index = 0;
	stk = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!stk)
		return (NULL);
	while (index < ac)
	{
		stk[index].size = ft_strlen(av[index]);
		stk[index].str = av[index];
		stk[index].copy = ft_strdup(av[index]);
		index++;
	}
	stk[index] = (struct s_stock_str){0, 0, 0};
	return (stk);
}

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
