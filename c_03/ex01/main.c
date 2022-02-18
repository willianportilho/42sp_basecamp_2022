/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:30:28 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 20:21:12 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "$'\201'";
	char	s2[] = "A";
	int		result;

	result = strncmp(s1, s2, 3);
	printf("original\n      s1: %s\n      s2: %s\nresultado: %d\n\n", s1, s2, result);
	result = ft_strncmp(s1, s2, 3);
	printf("\ncópia\n      s1: %s\n      s2: %s\nresultado: %d\n\n", s1, s2, result);
}
