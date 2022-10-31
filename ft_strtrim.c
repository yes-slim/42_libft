/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:25:27 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 11:43:19 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_front(char const *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static size_t	check_back(char const *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s) - 1;
	j = 0;
	while (set[j] != '\0')
	{
		if (s[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	l;
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	if (!set)
		return ((char *)s);
	l = 0;
	i = check_front(s, set);
	if (s[l] == '\0' || i == ft_strlen(s))
		return (ft_strdup(""));
	j = check_back(s, set);
	str = malloc((j - i + 2) * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[l] = s[i];
		i++;
		l++;
	}
	str[l] = '\0';
	return (str);
}
// int main()
// {
// 	char *str = "hellow from the other side of the world";;
// 	char *set = NULL;
// 	char *s;
// 	s = ft_strtrim(str, set);
// 	printf("%s\n", s);
// }