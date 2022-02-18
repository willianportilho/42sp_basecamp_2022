/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:35:15 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/17 19:23:10 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	int result;
	char s1[] = "ABC";
	char s2[] = "AB";

	result = strcmp(s1, s2);
	printf("\n     str1: %s\n     str2: %s\nResultado: %d\n", s1, s2, result);
	result = ft_strcmp(s1, s2);
	printf("\n     str1: %s\n     str2: %s\nResultado: %d\n", s1, s2, result);
}
