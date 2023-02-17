/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:53:20 by ygorgsena         #+#    #+#             */
/*   Updated: 2023/02/16 22:00:36 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	static int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == i)
		return (1);
	if (nb % i == 0)
		return (0);
	i++;
	return (ft_is_prime(nb));
}

/* #include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = 30;
	if (ft_is_prime(nbr))
		printf("%d is a prime number.\n", nbr);
	else
		printf("%d isn't a prime number.\n", nbr);
	return (0);
} */