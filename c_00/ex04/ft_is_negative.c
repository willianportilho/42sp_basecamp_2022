/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 04:11:00 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/09 19:29:32 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	ascii_letter;

	ascii_letter = 78;
	if (n < 0)
	{
		write(1, &ascii_letter, 1);
	}
	ascii_letter = 80;
	if (n >= 0)
	{
		write(1, &ascii_letter, 1);
	}
}
