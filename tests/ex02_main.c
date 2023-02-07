/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evmorvan <evmorvan@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:04:12 by evmorvan          #+#    #+#             */
/*   Updated: 2023/02/07 11:33:04 by evmorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char s_dest[100] = "the cake ";
	char s_src[] = "is a lie";
	char s2_dest[100] = "the cake ";
	char s2_src[] = "is a lie";

	ft_strcat(s_dest, s2_src);
	strcat(s2_dest, s2_src);
	printf("%s\n%s\n", s_dest, s2_dest);
}
