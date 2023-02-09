/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evmorvan <evmorvan@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:21:50 by evmorvan          #+#    #+#             */
/*   Updated: 2023/02/09 15:00:18 by evmorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	n--;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
