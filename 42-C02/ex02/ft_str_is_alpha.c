/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:18:54 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/19 14:16:10 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_str_is_alpha(int count_size, int flag_is_alphabet);

int	ft_str_is_alpha(char *str)
{
	int		count_size;
	char	up_case_alphabet;
	char	down_case_alphabet;
	char	flag_is_alphabet;

	count_size = 0;
	flag_is_alphabet = 0;
	while (str[count_size] != '\0')
	{
		down_case_alphabet = 'a';
		up_case_alphabet = 'A';
		while (down_case_alphabet <= 'z')
		{
			if (str[count_size] == down_case_alphabet)
				flag_is_alphabet++;
			else if (str[count_size] == up_case_alphabet)
				flag_is_alphabet++;
			down_case_alphabet++;
			up_case_alphabet++;
		}
		count_size++;
	}
	return (check_str_is_alpha(count_size, flag_is_alphabet));
}

int	check_str_is_alpha(int count_size, int flag_is_alphabet)
{
	if (count_size == flag_is_alphabet)
		return (1);
	else
		return (0);
}
