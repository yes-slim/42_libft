/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:25:27 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/15 11:22:15 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s1);
	while (s[i] != set[j])
	{
		j = 0;
		while (s[i] == set[j])
			j++;
		i++;
	}
	while (s[len] != s[0])
	{
		j = 0;
		while (s[len] == set[j])
		{
			j++;
		}
		len--;
	}
	return(NULL);
}

int main()
{
	char const s[] = "==-=-=-+-+_HELLOW WORLD :)--=+--++--_=__";
	char set[] = "-_=+";
	ft_strtrim(s,set);
	return(0);
}