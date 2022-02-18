/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:50:37 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/12 15:28:50 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*********nbr;
	int	********nbr1;
	int	*******nbr2;
	int	******nbr3;
	int	*****nbr4;
	int	****nbr5;
	int	***nbr6;
	int	**nbr7;
	int	*nbr8;

	nbr8 = &a;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	a = 2;
	ft_ultimate_ft(nbr);
	printf("%d\n", *nbr8);
	printf("%d\n", a);
}
