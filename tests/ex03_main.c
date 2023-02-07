/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evmorvan <evmorvan@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:04:12 by evmorvan          #+#    #+#             */
/*   Updated: 2023/02/07 11:50:40 by evmorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char s_dest[100] = "the cake ";
	char s_src[] = "is a lie";
	char s2_dest[100] = "the cake ";
	char s2_src[] = "is a lie";

	ft_strncat(s_dest, s2_src, 3);
	strncat(s2_dest, s2_src, 3);
	printf("%s\n%s\n", s_dest, s2_dest);
}
