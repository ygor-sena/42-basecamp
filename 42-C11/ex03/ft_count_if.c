/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:09:14 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/16 19:59:13 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	non_zero;

	i = 0;
	non_zero = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			non_zero += 1;
		i++;
	}
	return (non_zero);
}
