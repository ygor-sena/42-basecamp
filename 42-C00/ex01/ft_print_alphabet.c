/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:32:34 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/12 04:35:55 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
