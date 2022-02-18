/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:14:32 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/09 20:16:43 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_numbers(int number_a, int number_b, int number_c)
{
	write(1, &number_a, 1);
	write(1, &number_b, 1);
	write(1, &number_c, 1);
	if (number_a < 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	number_a;
	int	number_b;
	int	number_c;

	number_a = 48;
	while (number_a <= 57)
	{
		number_b = number_a + 1;
		while (number_b <= 57)
		{
			number_c = number_b + 1;
			while (number_c <= 57)
			{
				write_numbers(number_a, number_b, number_c);
				number_c++;
			}
			number_b++;
		}
		number_a++;
	}
}
