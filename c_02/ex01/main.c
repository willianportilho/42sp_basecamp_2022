/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:03:56 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 02:01:08 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[7] = "";
	char	src[] = "abcdefghij";

	ft_strncpy(dest, src, 5);
	printf("DEST = %s\n", dest);
	printf("SRC  = %s\n", src);

}
