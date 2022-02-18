/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 03:38:12 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/09 19:22:12 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z_to_a;

	z_to_a = 122;
	while (z_to_a >= 97)
	{
		write(1, &z_to_a, 1);
		z_to_a--;
	}
}
