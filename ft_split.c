/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:54:50 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/19 17:59:02 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    int i;
    char **arr;
    int wc;
    int j;
    int n;
    
    i = 0;
    wc = 0;
    while (s[i] == c)
      i++;
    n = i;
    j = ft_strlen(s) - 1;
    while (s[j] == c)
      j--;
    while (s[i] != '\0')
    {
      if (s[i] == c && i <= j + 1)
        wc++;
      i++;
    }
    arr = malloc(wc * sizeof(char*));
    if (!arr)
        return(NULL);
    return (arr);
}

int main()
{
	const char str[] = "an asdfasdf aFS fFSA dfDF sadfaS AFa    ";
	char c = ' ';
	ft_split(str, c);
}