/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:25:31 by ygorgsena         #+#    #+#             */
/*   Updated: 2023/02/16 23:04:36 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	get_sqrt(int nb, int ref);

int	ft_sqrt(int nb)
{
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	return (get_sqrt(nb, 2));
}

static int	get_sqrt(int nb, int ref)
{
	static int	i;

	i = ref;
	if (i * i > nb)
		return (0);
	if (i * i == nb)
		return (i);
	i++;
	return (get_sqrt(nb, i));
}

/* #include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = 10000;
	printf("Square root of %d is %d.\n", nbr, ft_sqrt(nbr));
	return (0);
} */
