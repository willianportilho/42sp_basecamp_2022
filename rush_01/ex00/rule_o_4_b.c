/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_o_4_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:21:52 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/14 02:24:25 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	row_left_a(char pt_view[16], char tower[16])
{
	if (pt_view[8] == '4')
	{
		tower[0] = '1';
		tower[1] = '2';
		tower[2] = '3';
		tower[3] = '4';
	}
	if (pt_view[9] == '4')
	{
		tower[4] = '1';
		tower[5] = '2';
		tower[6] = '3';
		tower[7] = '4';
	}
}

void	row_left_b(char pt_view[16], char tower[16])
{
	if (pt_view[10] == '4')
	{
		tower[8] = '1';
		tower[9] = '2';
		tower[10] = '3';
		tower[11] = '4';
	}
	if (pt_view[11] == '4')
	{
		tower[12] = '1';
		tower[13] = '2';
		tower[14] = '3';
		tower[15] = '4';
	}
}

void	row_right_a(char pt_view[16], char tower[16])
{
	if (pt_view[12] == '4')
	{
		tower[3] = '1';
		tower[2] = '2';
		tower[1] = '3';
		tower[0] = '4';
	}
	if (pt_view[13] == '4')
	{
		tower[7] = '1';
		tower[6] = '2';
		tower[5] = '3';
		tower[4] = '4';
	}
}

void	row_right_b(char pt_view[16], char tower[16])
{
	if (pt_view[14] == '4')
	{
		tower[11] = '1';
		tower[10] = '2';
		tower[9] = '3';
		tower[8] = '4';
	}
	if (pt_view[15] == '4')
	{
		tower[15] = '1';
		tower[14] = '2';
		tower[13] = '3';
		tower[12] = '4';
	}
}

void	cond_obs_4_b(char pt_view[16], char tower[16])
{
	row_left_a(pt_view, tower);
	row_left_b(pt_view, tower);
	row_right_a(pt_view, tower);
	row_right_b(pt_view, tower);
}
