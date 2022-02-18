/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:01:55 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 15:53:01 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[] = "ABCDEFGHIJKLMNOPQabcdefgh ijklmnopqrstuvwxyzRSTUVWXYZ";
	int	resultado;

	resultado = ft_str_is_alpha(str);
	printf("\nA string: %s, teve o return de: %d\n", str, resultado);
}
