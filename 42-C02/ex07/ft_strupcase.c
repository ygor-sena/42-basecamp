/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:02:59 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/19 14:23:00 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		if (str[count_size] >= 'a' && str[count_size] <= 'z')
			str[count_size] -= 32;
		count_size++;
	}
	return (str);
}
