/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:22:21 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 20:55:19 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[50] = "0,1,2,3,4,5,6,7,8,9,";
	char	src[50] = "10,11,12,13,14,15.";
	char	*result;

	printf("\n     dest: %s\n", dest);
	printf("      src: %s\n", src);
//	result = strcat(dest, src);
//	printf("original\nResultado: %s\n\n", result);
	result = ft_strcat(dest, src);
	printf("   copia\nResultado: %s\n\n", result);
}
