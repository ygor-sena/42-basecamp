/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 04:45:57 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/17 19:12:34 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
