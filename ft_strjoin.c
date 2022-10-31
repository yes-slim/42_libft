/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:55:25 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 23:59:12 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	join(int i, int j, char *str, char const *s)
{
	while (s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (ft_calloc(1, sizeof(char)));
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	i = 0;
	j = join(i, j, str, s1);
	j = join(i, j, str, s2);
	str[j] = '\0';
	return (str);
}
