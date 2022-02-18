/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:27:08 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 15:54:44 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int 	resultado;

	resultado = ft_str_is_uppercase(str);
	printf("\nString: %s\nRetorno: %d\n\n", str, resultado);
}