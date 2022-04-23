/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:32:06 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/18 03:19:09 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int	ft_strlen(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		count_size++;
	}
	return (count_size);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	count_size;

	count_size = 0;
	while (src[count_size] != '\0')
	{
		dest[count_size] = src[count_size];
		count_size++;
	}	
	dest[count_size] = '\0';
	return (dest);
}

int	ft_str_is_numeric(char *str)
{
	int	count_size;
	int	flag_is_number;
	int	count_spaces;

	count_size = 0;
	count_spaces = 0;
	flag_is_number = 0;
	while (str[count_size] != '\0')
	{
		if ((str[count_size] >= '0' && str[count_size] <= '9')
			|| str[count_size] == ' ')
			flag_is_number++;
		if (str[count_size] == ' ')
			count_spaces++;
		count_size++;
	}
	if (count_size == count_spaces)
		return (1);
	else if (count_size == flag_is_number)
		return (0);
	else
		return (1);
}
#endif
