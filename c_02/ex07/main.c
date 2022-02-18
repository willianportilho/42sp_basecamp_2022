/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:30:36 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 02:17:58 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str[] = "abcdefghijklmno pqr styvw xyz 123ASASA";

	ft_strupcase(str);
	printf("\n   String: %s\n", str);
}
