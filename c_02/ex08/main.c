/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:04:14 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 02:18:50 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "abcdFFHSIGDGddFD pqr styvw xyz 123ASASsAz";

	ft_strlowcase(str);
	printf("\n   String: %s\n", str);
}
