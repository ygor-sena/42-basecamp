/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:17:19 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/20 22:51:39 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		if (str[count_size] >= 'A' && str[count_size] <= 'Z')
			str[count_size] += 32;
		count_size++;
	}
	count_size = 0;
	while (str[count_size] != '\0')
	{
		if (count_size == 0)
			str[count_size] -= 32;
		else if ((str[count_size] == ' '
				&& str[count_size + 1] >= 'a' && str[count_size + 1] <= 'z')
			|| (str[count_size] == '-'
				&& str[count_size + 1] >= 'a' && str[count_size + 1] <= 'z')
			|| (str[count_size] == '+'
				&& str[count_size + 1] >= 'a' && str[count_size + 1] <= 'z'))
			str[count_size + 1] -= 32;
		count_size++;
	}
	return (str);
}
