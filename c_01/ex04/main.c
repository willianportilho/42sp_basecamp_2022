/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:44:54 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/15 20:26:03 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 17;
	d = 10;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	printf("%d\n", c);
	printf("%d\n", d);
}
