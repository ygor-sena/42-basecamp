/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:08:21 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/20 04:13:51 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_length;
	int				count_size;
	unsigned int	nb_counter;

	count_size = 0;
	nb_counter = 0;
	dest_length = ft_strlen(dest);
	while (src[count_size] != '\0' && nb_counter < nb)
	{
		dest[dest_length + count_size] = src[count_size];
		count_size++;
		nb_counter++;
	}
	dest[dest_length + count_size] = '\0';
	return (dest);
}

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
