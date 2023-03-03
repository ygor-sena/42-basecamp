/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:46:45 by yde-goes          #+#    #+#             */
/*   Updated: 2023/03/03 16:01:17 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_prime(int nb, int ref);

int	ft_find_next_prime(int nb)
{	
	while (1)
	{
		if (ft_is_prime(nb, 2))
			return (nb);
		nb++;
	}
	return (-1);
}

static int	ft_is_prime(int nb, int ref)
{
	static int	i;

	i = ref;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == i)
		return (1);
	if (nb % i == 0)
		return (0);
	return (ft_is_prime(nb, i + 1));
}
/* #include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = 53;
	printf("Next prime number is %d.\n", ft_find_next_prime(nbr));
	return (0);
} */