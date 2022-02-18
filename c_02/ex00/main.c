/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:40:38 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 15:02:30 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[10] = "";
	char	src[] = "Teste";

	ft_strcpy(dest, src);
	printf("\nO arquivo destino 'dest', ficou assim:\n%s\n\n", dest);
	printf("O arquivo de entrada 'src', ficou igual:\n%s\n\n", src);
}
