/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:28:08 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/18 16:08:19 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (size == SIZE_MAX || count == SIZE_MAX)
		return (NULL);
	tab = malloc(count * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, (count * size));
	return (tab);
}
