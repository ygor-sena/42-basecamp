/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:07:52 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/21 03:15:01 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count_size;
	int	nb_converted;
	int	signal;

	count_size = 0;
	nb_converted = 0;
	signal = 1;
	while (str[count_size] == ' '
		|| (str[count_size] >= 9 && str[count_size] <= 13))
		count_size++;
	while (str[count_size] == '+' || str[count_size] == '-')
	{
		if (str[count_size] == '-')
			signal *= -1;
		count_size++;
	}
	while (str[count_size] >= '0' && str[count_size] <= '9')
	{
		nb_converted = (nb_converted * 10) + (str[count_size] - '0');
		count_size++;
	}
	return (signal * nb_converted);
}
