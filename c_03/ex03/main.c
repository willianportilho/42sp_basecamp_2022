/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:58:33 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/18 00:52:42 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	dest[100] = "42 ";
	char	src[100] = "Sao Paulo";
	int		number;

//	ft_strncat(dest, src, 1);
//	printf("\n   copia\n    dest: %s\n", dest);
	strncat(dest, src, 1);
	printf("\noriginal\n    dest: %s\n", dest);
	number = strlen(dest);
	printf("\n   bytes\n    dest: %d\n", number);
}
