/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_o_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:46:54 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/14 01:28:38 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	centers_u_d(char pt_view[16], char tower[16])
{
	if (pt_view[1] == '1')
	{
		tower[1] = '4';
	}
	if (pt_view[2] == '1')
	{
		tower[2] = '4';
	}
	if (pt_view[5] == '1')
	{
		tower[13] = '4';
	}
	if (pt_view[6] == '1')
	{
		tower[14] = '4';
	}
}

void	centers_l_r(char pt_view[16], char tower[16])
{
	if (pt_view[13] == '1')
	{
		tower[7] = '4';
	}
	if (pt_view[14] == '1')
	{
		tower[11] = '4';
	}
	if (pt_view[9] == '1')
	{
		tower[4] = '4';
	}
	if (pt_view[10] == '1')
	{
		tower[8] = '4';
	}
}

void	corners_u_d_l_r(char pt_view[16], char tower[16])
{
	if (pt_view[0] == '1' || pt_view[8] == '1')
	{
		tower[0] = '4';
	}
	if (pt_view[3] == '1' || pt_view[12] == '1')
	{
		tower[3] = '4';
	}
	if (pt_view[4] == '1' || pt_view[11] == '1')
	{
		tower[12] = '4';
	}
	if (pt_view[7] == '1' || pt_view[15] == '1')
	{
		tower[15] = '4';
	}
}

void	cond_obs_1(char pt_view[16], char tower[16])
{
	centers_u_d(pt_view, tower);
	centers_l_r(pt_view, tower);
	corners_u_d_l_r(pt_view, tower);
}
