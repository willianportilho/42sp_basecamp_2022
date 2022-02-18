/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:33:45 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/09 19:14:39 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a_to_z;

	a_to_z = 97;
	while (a_to_z <= 122)
	{
		write(1, &a_to_z, 1);
		a_to_z++;
	}
}
