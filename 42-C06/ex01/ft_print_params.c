/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:26:38 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/12/08 17:32:42 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	while (index < argc)
	{
		write(1, argv[index], ft_strlen(argv[index]));
		if (index + 1 < argc)
			write(1, "\n", 2);
		index++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
		count_size++;
	return (count_size);
}
