/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:56:47 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/19 14:17:23 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_str_is_uppercase(int count_size, int flag_is_alphabet);

int	ft_str_is_uppercase(char *str)
{
	int		count_size;
	char	up_case_alphabet;
	char	flag_is_alphabet;

	count_size = 0;
	flag_is_alphabet = 0;
	while (str[count_size] != '\0')
	{
		up_case_alphabet = 'A';
		while (up_case_alphabet <= 'Z')
		{
			if (str[count_size] == up_case_alphabet)
				flag_is_alphabet++;
			up_case_alphabet++;
		}
		count_size++;
	}
	return (check_str_is_uppercase(count_size, flag_is_alphabet));
}

int	check_str_is_uppercase(int count_size, int flag_is_alphabet)
{
	if (count_size == flag_is_alphabet)
		return (1);
	else
		return (0);
}
