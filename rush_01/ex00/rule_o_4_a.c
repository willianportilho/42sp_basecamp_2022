/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_o_4_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:21:52 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/14 02:24:18 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_up_a(char pt_view[16], char tower[16])
{
	if (pt_view[0] == '4')
	{
		tower[0] = '1';
		tower[4] = '2';
		tower[8] = '3';
		tower[12] = '4';
	}
	if (pt_view[1] == '4')
	{
		tower[1] = '1';
		tower[5] = '2';
		tower[9] = '3';
		tower[13] = '4';
	}
}

void	col_up_b(char pt_view[16], char tower[16])
{
	if (pt_view[2] == '4')
	{
		tower[2] = '1';
		tower[6] = '2';
		tower[10] = '3';
		tower[14] = '4';
	}
	if (pt_view[3] == '4')
	{
		tower[3] = '1';
		tower[7] = '2';
		tower[11] = '3';
		tower[15] = '4';
	}
}

void	col_down_a(char pt_view[16], char tower[16])
{
	if (pt_view[4] == '4')
	{
		tower[12] = '1';
		tower[8] = '2';
		tower[4] = '3';
		tower[0] = '4';
	}
	if (pt_view[5] == '4')
	{
		tower[13] = '1';
		tower[9] = '2';
		tower[5] = '3';
		tower[1] = '4';
	}
}

void	col_down_b(char pt_view[16], char tower[16])
{
	if (pt_view[6] == '4')
	{
		tower[14] = '1';
		tower[10] = '2';
		tower[6] = '3';
		tower[2] = '4';
	}
	if (pt_view[7] == '4')
	{
		tower[15] = '1';
		tower[11] = '2';
		tower[7] = '3';
		tower[3] = '4';
	}
}

void	cond_obs_4_a(char pt_view[16], char tower[16])
{
	col_up_a(pt_view, tower);
	col_up_b(pt_view, tower);
	col_down_a(pt_view, tower);
	col_down_b(pt_view, tower);
}
