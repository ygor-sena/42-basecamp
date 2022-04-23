/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:06:20 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/18 23:56:07 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	slct_count;

	slct_count = 0;
	while (src[slct_count] != '\0' && slct_count < n)
	{
		dest[slct_count] = src[slct_count];
		slct_count++;
	}
	while (slct_count < n)
	{
		dest[slct_count] = '\0';
		slct_count++;
	}		
	return (dest);
}
