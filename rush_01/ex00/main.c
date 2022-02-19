/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:36:49 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/14 16:09:48 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cond_obs_1(char pt_view[16], char tower[16]);
void	cond_obs_4_a(char pt_view[16], char tower[16]);
void	cond_obs_4_b(char pt_view[16], char tower[16]);
void	cond_obs_1_2(char pt_view[16], char tower[16]);
void	cond_obs_2_3(char pt_view[16], char tower[16]);

void	point_views(char pt_view[16])
{
	pt_view[0] = '3';
	pt_view[1] = '1';
	pt_view[2] = '2';
	pt_view[3] = '3';
	pt_view[4] = '2';
	pt_view[5] = '3';
	pt_view[6] = '3';
	pt_view[7] = '1';
	pt_view[8] = '2';
	pt_view[9] = '2';
	pt_view[10] = '1';
	pt_view[11] = '2';
	pt_view[12] = '3';
	pt_view[13] = '2';
	pt_view[14] = '4';
	pt_view[15] = '1';
}

void	all_towers(char tower[16])
{
	tower[0] = 'a';
	tower[1] = 'b';
	tower[2] = 'c';
	tower[3] = 'd';
	tower[4] = 'l';
	tower[5] = 'm';
	tower[6] = 'n';
	tower[7] = 'e';
	tower[8] = 'k';
	tower[9] = 'p';
	tower[10] = 'o';
	tower[11] = 'f';
	tower[12] = 'j';
	tower[13] = 'i';
	tower[14] = 'h';
	tower[15] = 'g';
}

void	print_towers(char tower)
{
	write(1, &tower[0], 1);
	write(1, &tower[1], 1);
	write(1, &tower[2], 1);
	write(1, &tower[3], 1);
	write(1, "\n", 1);
	write(1, &tower[4], 1);
	write(1, &tower[5], 1);
	write(1, &tower[6], 1);
	write(1, &tower[7], 1);
	write(1, "\n", 1);
	write(1, &tower[8], 1);
	write(1, &tower[9], 1);
	write(1, &tower[10], 1);
	write(1, &tower[11], 1);
	write(1, "\n", 1);
	write(1, &tower[12], 1);
	write(1, &tower[13], 1);
	write(1, &tower[14], 1);
	write(1, &tower[15], 1);
	write(1, "\n", 1);
}

int	main(void)
{
	char	tower[16];
	char	pt_view[16];

	point_views(pt_view);
	all_towers(tower);
	cond_obs_1(pt_view, tower);
	cond_obs_4_a(pt_view, tower);
	cond_obs_4_b(pt_view, tower);
	cond_obs_1_2(pt_view, tower);
	cond_obs_2_3(pt_view, tower);
	print_towers(tower);
}
