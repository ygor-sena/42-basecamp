/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:15:06 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/12/08 17:24:50 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	write(1, argv[0], ft_strlen(argv[0]));
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
