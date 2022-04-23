/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:02:33 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/18 04:11:29 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

int	main(int argc, char *argv[])
{
	int		length;
	char	save_str[30];

	length = ft_strlen(argv[1]);
	ft_strcpy(save_str, argv[1]);
	if (argc > 2)
	{
		write(1, "Error\n", 7);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Error\n", 7);
		return (1);
	}
	else if (length < 31 || length > 31)
	{
		write(1, "Error\n", 7);
		return (1);
	}
	else if (ft_str_is_numeric(save_str) == 1)
	{
		write(1, "Error\n", 7);
		return (1);
	}
	return (0);
}
