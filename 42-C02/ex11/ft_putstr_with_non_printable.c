/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 04:29:21 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/18 04:56:15 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	convert_to_hex(char str);

void	ft_putstr_with_non_printable(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		if (str[count_size] >= 0 && str[count_size] <= 31)
		{
			printf("111%s", &str[count_size]);
			convert_to_hex(str[count_size]);
		}
		else
			write(1, &str[count_size], 1);
		count_size++;
	}
}

int	convert_to_hex(char str)
{
	int	find_ascii;
	int	save_ascii;
	printf("00%c", str);
	find_ascii = 0;
	while (find_ascii <= 31)
	{
		if (str == find_ascii)
		{
			save_ascii = find_ascii;
			printf("%i", save_ascii);
			return (0);
		}	
	}
	return (0);
}
