/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:17:34 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/18 18:17:12 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;

	j = 0;
	i = start;
	if (len <= start)
		return (ft_strdup(""));
	if (str[i] == '\0')
		return (ft_strdup(""));
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	while (str[i] != '\0' && i < len + (size_t)start)
	{
		subs[j] = str[i];
		i++;
		j++;
	}
	subs[j] = '\0';
	return (subs);
}
//int main()
//{
//	const char str[] = "asdjhfaljdhsfjahsdlkfjahsldkjfhaslkdjfhalksdjfhalksjdfh";
//	char *ret;
//	ret = ft_substr(str, 10, 8);
//	printf("%s",ret);
//}
