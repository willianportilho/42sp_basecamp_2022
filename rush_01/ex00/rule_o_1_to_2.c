/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_o_1_to_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:12:14 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/14 01:28:06 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_up_1(char pt_view[16], char tower[16])
{
	if (pt_view[0] == '1' && pt_view[4] == '2')
	{
		tower[12] = '3';
	}
	if (pt_view[1] == '1' && pt_view[5] == '2')
	{
		tower[13] = '3';
	}
	if (pt_view[2] == '1' && pt_view[6] == '2')
	{
		tower[14] = '3';
	}
	if (pt_view[3] == '1' && pt_view[7] == '2')
	{
		tower[15] = '3';
	}
}

void	col_down_1(char pt_view[16], char tower[16])
{
	if (pt_view[4] == '1' && pt_view[0] == '2')
	{
		tower[0] = '3';
	}
	if (pt_view[5] == '1' && pt_view[1] == '2')
	{
		tower[1] = '3';
	}
	if (pt_view[6] == '1' && pt_view[2] == '2')
	{
		tower[2] = '3';
	}
	if (pt_view[7] == '1' && pt_view[3] == '2')
	{
		tower[3] = '3';
	}
}

void	row_left_1(char pt_view[16], char tower[16])
{
	if (pt_view[8] == '1' && pt_view[12] == '2')
	{
		tower[3] = '3';
	}
	if (pt_view[9] == '1' && pt_view[13] == '2')
	{
		tower[7] = '3';
	}
	if (pt_view[10] == '1' && pt_view[14] == '2')
	{
		tower[11] = '3';
	}
	if (pt_view[11] == '1' && pt_view[15] == '2')
	{
		tower[15] = '3';
	}
}

void	row_right_1(char pt_view[16], char tower[16])
{
	if (pt_view[12] == '1' && pt_view[8] == '2')
	{
		tower[0] = '3';
	}
	if (pt_view[13] == '1' && pt_view[9] == '2')
	{
		tower[4] = '3';
	}
	if (pt_view[14] == '1' && pt_view[10] == '2')
	{
		tower[8] = '3';
	}
	if (pt_view[15] == '1' && pt_view[11] == '2')
	{
		tower[12] = '3';
	}
}

void	cond_obs_1_2(char pt_view[16], char tower[16])
{
	col_up_1(pt_view, tower);
	col_down_1(pt_view, tower);
	row_left_1(pt_view, tower);
	row_right_1(pt_view, tower);
}
