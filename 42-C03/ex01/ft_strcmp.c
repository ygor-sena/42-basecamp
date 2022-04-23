/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:36:33 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/23 02:31:21 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count_size;

	count_size = 0;
	while (s1[count_size] != '\0' || s2[count_size] != '\0')
	{
		if (s1[count_size] != s2[count_size])
			return ((unsigned char) s1[count_size]
				- (unsigned char) s2[count_size]);
		count_size++;
	}
	return (0);
}

//Another way to solve the problem
//Solution by fellow camper danteixe
/*int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}*/