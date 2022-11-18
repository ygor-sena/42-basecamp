/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:33:28 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/16 19:19:04 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[length]);
		i++;
	}	
}

/* void plus_two(int nbr)
{
	nbr += 2;
	printf("%d\n", nbr);
}

int	main(void)
{
	int tab[] = { 5, 6, 7, 10} ;
	
	ft_foreach(tab, 5, plus_two);
	for (int i = 0; i < 4; i++)
		printf("tab %d is %d\n", i, tab[i]);
} */