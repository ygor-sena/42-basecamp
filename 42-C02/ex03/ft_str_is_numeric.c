/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:36:32 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/20 21:52:07 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_str_is_num(int count_size, int flag_is_number);

int	ft_str_is_numeric(char *str)
{
	int		count_size;
	char	ref_number;
	int		flag_is_number;

	count_size = 0;
	flag_is_number = 0;
	while (str[count_size] != '\0')
	{
		ref_number = '0';
		while (ref_number <= '9')
		{
			if (str[count_size] == ref_number)
				flag_is_number++;
			ref_number++;
		}
		count_size++;
	}
	return (check_str_is_num(count_size, flag_is_number));
}

int	check_str_is_num(int count_size, int flag_is_number)
{
	if (count_size == flag_is_number)
		return (1);
	else
		return (0);
}
