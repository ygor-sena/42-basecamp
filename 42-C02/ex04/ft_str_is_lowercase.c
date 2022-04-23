/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:52:07 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/19 14:18:25 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_str_is_lowercase(int count_size, int flag_is_alphabet);

int	ft_str_is_lowercase(char *str)
{
	int		count_size;
	char	down_case_alphabet;
	char	flag_is_alphabet;

	count_size = 0;
	flag_is_alphabet = 0;
	while (str[count_size] != '\0')
	{
		down_case_alphabet = 'a';
		while (down_case_alphabet <= 'z')
		{
			if (str[count_size] == down_case_alphabet)
				flag_is_alphabet++;
			down_case_alphabet++;
		}
		count_size++;
	}
	return (check_str_is_lowercase(count_size, flag_is_alphabet));
}

int	check_str_is_lowercase(int count_size, int flag_is_alphabet)
{
	if (count_size == flag_is_alphabet)
		return (1);
	else
		return (0);
}
