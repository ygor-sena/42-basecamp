/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:01:39 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/23 02:30:17 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_aux;
	int	tf_aux;
	int	flag_is_equal;

	str_aux = 0;
	if (to_find[0] == '\0')
		return (&str[str_aux]);
	while (str[str_aux] != '\0')
	{
		tf_aux = 0;
		if (str[str_aux] == to_find[tf_aux])
		{
			flag_is_equal = str_aux;
			while (str[str_aux] == to_find[tf_aux] && to_find[tf_aux] != '\0')
			{
				str_aux++;
				tf_aux++;
			}
			if (to_find[tf_aux] == '\0')
				return (&str[flag_is_equal]);
		}
		str_aux++;
	}
	return (0);
}

//Here is a more elegant way to solve the problem
//that I learned with fellow camper danteixe
/*char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	len;
	unsigned int	cmp;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	len = ft_strlen(to_find);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			cmp = ft_strncmp(str, to_find, len);
			if (cmp == 0)
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}*/