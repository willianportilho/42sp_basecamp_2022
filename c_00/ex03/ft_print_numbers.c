/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 03:51:43 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/05 22:51:21 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number_dec;

	number_dec = 48;
	while (number_dec <= 57)
	{
		write (1, &number_dec, 1);
		number_dec++;
	}
}
