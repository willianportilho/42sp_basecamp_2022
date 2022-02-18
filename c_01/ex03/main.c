/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 02:49:51 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/15 20:24:58 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 17;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
}
