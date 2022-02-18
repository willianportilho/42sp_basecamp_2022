/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:20:48 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 15:53:57 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int resultado;

	resultado = ft_str_is_lowercase(str);
	printf("\nString: %s\nRetorno: %d\n\n", str, resultado);
}