/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:26:12 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/30 16:00:41 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *sr, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	if (!dst && !sr)
		return (NULL);
	i = 0;
	dest = (unsigned char *)dst;
	src = (unsigned char *)sr;
	if (dest == src)
		return ((void *)dest);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return ((void *)dest);
}
// #include <string.h>
// int main()
// {
// 	char *str = "hellow";
// 	char *s1;
// 	s1=str;
// 	char *s2;
// 	s2=str;
// 	ft_memcpy(s1, s2, 5);
// 	memcpy(s1, s2, 5);
// }