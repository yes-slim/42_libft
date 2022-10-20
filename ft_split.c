/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:54:50 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/20 11:54:23 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrdcount(char const *s, char c)
{
	int	i;
	int	j;
	int	wc;

	i = 0;
	wc = 0;
	j = ft_strlen(s);
	while (s[i] == c)
		i++;
	while (s[j] == c)
		j--;
	while (s[i] != '\0')
	{
		if (s[i] == c && i < j + 1)
			wc++;
		i++;
	}
	return (wc);
}

static char	*fillwrd(const char *s, int start , char c)
{
	char	*tab;
	int		i;
	int		len;
	
	len = 0;
	i = start + 1;
	while (s[i] != c)
	{
		len++;
		i++;
	}
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (start < len - 1)
	{
		tab[i] = s[start + 1];
		i++;
		start++;
	}
	tab[i] = '\0';
	return (tab);
}

static void	ft_free(char **arr, int i)
{
	while (i != 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char    **ft_split(char const *s, char c)
{
	int	wc;
	int	wst;
	int	i;

	wc = ft_wrdcount(s, c);
	char **arr;
    arr = malloc(wc * sizeof(char*));
    if (!arr)
        return(NULL);
	
	i = 0;
	wst = 0;
	while (wc != 0)
	{
		while (s[wst] != c)
			wst++;
		arr[i] = fillwrd(s, wst, c);
		if (!arr[i])
			ft_free(arr, i);
		i++;
		wc--;
		while (s[wst] != c && s[wst])
			wst++;
	}
    return (arr);
}

int main()
{
	const char str[] = "hellow    khbkjb kkjh        ohfodshf dsfouh     jdsf sdifuhsd sdjfhs    ";
	char c = ' ';
	char **arr;
	arr = ft_split(str, c);
	int i;
	for (i=0 ; i<8; i++)
		printf("%s",arr[i]);
}