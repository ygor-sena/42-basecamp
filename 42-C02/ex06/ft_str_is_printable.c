/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:06:52 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/16 19:27:42 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_str_is_printable(int count_size, int flag_is_printable);

int	ft_str_is_printable(char *str)
{
	int				count_size;
	unsigned char	printable_char;
	char			flag_is_printable;

	count_size = 0;
	flag_is_printable = 0;
	while (str[count_size] != '\0')
	{
		printable_char = 32;
		while (printable_char <= 127)
		{
			if (str[count_size] == printable_char)
				flag_is_printable++;
			printable_char++;
		}
		count_size++;
	}
	return (check_str_is_printable(count_size, flag_is_printable));
}

int	check_str_is_printable(int count_size, int flag_is_printable)
{
	if (count_size == flag_is_printable)
		return (1);
	else
		return (0);
}
