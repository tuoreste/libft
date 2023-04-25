/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:57:01 by otuyishi          #+#    #+#             */
/*   Updated: 2023/04/06 10:31:24 by otuyishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (str1[count] == str2[count] && str1[count] != '\0' && count < (n - 1))
		count++;
	return ((unsigned char)str1[count] - (unsigned char)str2[count]);
}

// int main(void)
// {
// 	char *s1 = "atoms\0\0\0\0";
//     char *s2 = "atoms\0abc";
//     size_t size = 8;
//     int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : 
		//((strncmp(s1, s2, size) < 0) ? -1 : 0));
//     int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : 
		//((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));
//     if (i1 == i2)
// 		printf("ok");
// 	return (0);
// }