/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:44:02 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 15:56:10 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[] = "\n!#$&()*+,-./0123456789:;<=>?@ABCDEGHIJKLM QRSTUVWXYZ[]^_`ab{~€";
	int		result;
	
	result = ft_str_is_printable(str);
	printf("\nString: '%s'\nResultado: '%d'\n", str, result);
}
