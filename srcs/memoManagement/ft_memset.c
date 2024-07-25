/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:07:01 by otuyishi          #+#    #+#             */
/*   Updated: 2024/07/25 09:42:25 by otuyishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *dst, int src, size_t bytes_len)
{
	unsigned char	*dst_dst;
	unsigned char	src_src;
	size_t			count;

	dst_dst = (unsigned char *)dst;
	src_src = (unsigned char)src;
	count = 0;
	while (count < bytes_len)
	{
		dst_dst[count] = src_src;
		count++;
	}
	return (dst);
}
