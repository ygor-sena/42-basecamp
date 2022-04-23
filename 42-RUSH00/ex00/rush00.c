/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:16:30 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/11 18:22:14 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 || row == y) && (column == 1 || column == x))
				ft_putchar('o');
			else if ((row == 1 || row == y) && (column != 1 || column != x))
				ft_putchar('-');
			else if ((row != 1 || row != y) && (column == 1 || column == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (column == x)
				ft_putchar('\n');
			column++;
		}
		row++;
	}
}

void	rush01(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 && column == 1)
				|| (row == y && column == x && y > 1 && x > 1))
				ft_putchar('/');
			else if ((row == y && column == 1) || (row == 1 && column == x))
				ft_putchar('\\');
			else if (((row == 1 || row == y) && (column != 1 || column != x))
				|| ((row != 1 || row != y) && (column == 1 || column == x)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			if (column == x)
				ft_putchar('\n');
			column++;
		}
		row++;
	}
}

void	rush02(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (row == 1 && (column == 1 || column == x))
				ft_putchar('A');
			else if (row == y && (column == 1 || column == x))
				ft_putchar('C');
			else if ((row == 1 || row == y) && (column != 1 || column != x))
				ft_putchar('B');
			else if ((row != 1 || row != y) && (column == 1 || column == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (column == x)
				ft_putchar('\n');
			column++;
		}
		row++;
	}
}

void	rush03(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 || row == y) && column == 1)
				ft_putchar('A');
			else if ((row == 1 || row == y) && column == x)
				ft_putchar('C');
			else if ((row == 1 || row == y) && (column != 1 || column != x))
				ft_putchar('B');
			else if ((row != 1 || row != y) && (column == 1 || column == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (column == x)
				ft_putchar('\n');
			column++;
		}
		row++;
	}
}

void	rush04(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 && column == 1)
				|| (row == y && column == x && y > 1 && x > 1))
				ft_putchar('A');
			else if ((row == y && column == 1) || (row == 1 && column == x))
				ft_putchar('C');
			else if (((row == 1 || row == y) && (column != 1 || column != x))
				|| ((row != 1 || row != y) && (column == 1 || column == x)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (column == x)
				ft_putchar('\n');
			column++;
		}
		row++;
	}
}
