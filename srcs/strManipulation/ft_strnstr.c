/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:45:49 by otuyishi          #+#    #+#             */
/*   Updated: 2024/07/25 09:42:25 by otuyishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	start;
	size_t	how_long;
	char	*needle_needle;

	start = 0;
	needle_needle = (char *)needle;
	how_long = ft_strlen(needle_needle);
	if (*needle == '\0')
	{
		return ((char *) haystack);
	}
	while (*haystack != '\0' && len >= start + how_long)
	{
		if (ft_strncmp(haystack, needle, how_long) == 0)
		{
			return ((char *)haystack);
		}
		start++;
		haystack++;
	}
	return (0);
}
