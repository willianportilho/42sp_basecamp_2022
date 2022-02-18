/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:29:39 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/10 17:12:53 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_numbers(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if ((a < 57) + (b < 56))
	{
		write(1, ", ", 2);
	}
}

void	calculate(int a, int b, int c, int d)
{
	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				while (d <= 57)
				{
					write_numbers(a, b, c, d);
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 48;
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 48;
	b = 48;
	c = 48;
	d = 49;
	calculate(a, b, c, d);
}
