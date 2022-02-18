/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:53:43 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 15:53:31 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "123";
	int		result;

	result = ft_str_is_numeric(str);
	printf("\nA string '%s', teve retorno '%d'\n", str, result);
}
