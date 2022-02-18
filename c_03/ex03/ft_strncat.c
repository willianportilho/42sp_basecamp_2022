/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:58:29 by wportilh          #+#    #+#             */
/*   Updated: 2022/02/18 00:46:54 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i_2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i_2 = 0;
	while (i_2 < nb && src[i_2] != '\0')
	{
		dest[i] = src[i_2];
		i++;
		i_2++;
	}
	dest[i] = '\0';
	return (dest);
}
