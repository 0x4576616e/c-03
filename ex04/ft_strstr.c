/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evmorvan <evmorvan@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:29:50 by evmorvan          #+#    #+#             */
/*   Updated: 2023/02/09 14:41:15 by evmorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	str_len;
	int	to_find_len;
	int	i;
	int	j;

	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	i = 0;
	while (i <= str_len - to_find_len)
	{
		j = 0;
		while (j < to_find_len && str[i + j] == to_find[j])
			j++;
		if (j == to_find_len)
			return (str + i);
		i++;
	}
	return (0);
}
