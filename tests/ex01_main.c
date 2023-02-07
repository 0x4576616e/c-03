/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evmorvan <evmorvan@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:51:07 by evmorvan          #+#    #+#             */
/*   Updated: 2023/02/07 11:59:37 by evmorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s[] = "abcdefghijkl";
	char s2[] = "abCdefghijkl";
	char s3[] = "abcdefghijkl";
	char s4[] = "abcdef";

	printf("%d, %d\n", strncmp(s, s, 3), ft_strncmp(s, s, 3));
	printf("%d, %d\n", strncmp(s, s2, 5), ft_strncmp(s, s2, 5));
	printf("%d, %d\n", strncmp(s2, s, 2), ft_strncmp(s2, s, 2));
	printf("%d, %d\n", strncmp(s, s3, 1), ft_strncmp(s, s3, 1));
	printf("%d, %d\n", strncmp(s, s4, 2), ft_strncmp(s, s4, 2));
	printf("%d, %d\n", strncmp(s4, s, 5), ft_strncmp(s4, s, 5));
}
	
