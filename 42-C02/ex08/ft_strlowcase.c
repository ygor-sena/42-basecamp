/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:07:57 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/17 04:19:27 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		if (str[count_size] >= 'A' && str[count_size] <= 'Z')
			str[count_size] += 32;
		count_size++;
	}
	return (str);
}
