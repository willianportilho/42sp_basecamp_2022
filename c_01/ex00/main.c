/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:05:52 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/15 19:30:39 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*nbr;

	a = 0;
	nbr = &a;
	ft_ft(nbr);
	printf("%d\n", *nbr);
	printf("%d\n", a);
}
