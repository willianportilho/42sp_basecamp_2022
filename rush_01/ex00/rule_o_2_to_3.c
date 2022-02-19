/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_o_2_to_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:11:33 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/14 01:29:58 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_up_2(char pt_view[16], char tower[16])
{
	if (pt_view[0] == '2' && pt_view[4] == '3')
	{
		tower[4] = '4';
	}
	if (pt_view[1] == '2' && pt_view[5] == '3')
	{
		tower[5] = '4';
	}
	if (pt_view[2] == '2' && pt_view[6] == '3')
	{
		tower[6] = '4';
	}
	if (pt_view[3] == '2' && pt_view[7] == '3')
	{
		tower[7] = '4';
	}
}

void	col_down_2(char pt_view[16], char tower[16])
{
	if (pt_view[4] == '2' && pt_view[0] == '3')
	{
		tower[8] = '4';
	}
	if (pt_view[5] == '2' && pt_view[1] == '3')
	{
		tower[9] = '4';
	}
	if (pt_view[6] == '2' && pt_view[2] == '3')
	{
		tower[10] = '4';
	}
	if (pt_view[7] == '2' && pt_view[3] == '3')
	{
		tower[11] = '4';
	}
}

void	row_left_2(char pt_view[16], char tower[16])
{
	if (pt_view[8] == '2' && pt_view[12] == '3')
	{
		tower[1] = '4';
	}
	if (pt_view[9] == '2' && pt_view[13] == '3')
	{
		tower[5] = '4';
	}
	if (pt_view[10] == '2' && pt_view[14] == '3')
	{
		tower[9] = '4';
	}
	if (pt_view[11] == '2' && pt_view[15] == '3')
	{
		tower[13] = '4';
	}
}

void	row_right_2(char pt_view[16], char tower[16])
{
	if (pt_view[12] == '2' && pt_view[8] == '3')
	{
		tower[2] = '4';
	}
	if (pt_view[13] == '2' && pt_view[9] == '3')
	{
		tower[6] = '4';
	}
	if (pt_view[14] == '2' && pt_view[10] == '3')
	{
		tower[10] = '4';
	}
	if (pt_view[15] == '2' && pt_view[11] == '3')
	{
		tower[12] = '4';
	}
}

void	cond_obs_2_3(char pt_view[16], char tower[16])
{
	col_up_2(pt_view, tower);
	col_down_2(pt_view, tower);
	row_left_2(pt_view, tower);
	row_right_2(pt_view, tower);
}
