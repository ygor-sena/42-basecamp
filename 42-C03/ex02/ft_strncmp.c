/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:54:19 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/22 19:55:13 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count_size;

	count_size = 0;
	while ((s1[count_size] != '\0' || s2[count_size] != '\0')
		&& count_size < n)
	{
		if (s1[count_size] != s2[count_size])
			return ((unsigned char) s1[count_size]
				- (unsigned char) s2[count_size]);
		count_size++;
	}
	return (0);
}
