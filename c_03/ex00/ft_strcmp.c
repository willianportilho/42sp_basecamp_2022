/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:34:55 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/18 00:41:19 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n_ascii;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			n_ascii = s1[i] - s2[i];
			return (n_ascii);
		}
		i++;
	}
	n_ascii = s1[i] - s2[i];
	return (n_ascii);
}
