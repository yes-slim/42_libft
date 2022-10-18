/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:06:54 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/18 16:27:25 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft__(unsigned int i, char *str)
{
	(void)i;
	*str = '*';
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

//int main()
//{
//  char str[] = "dsadasdad";
//  ft_striteri(str, &ft__);
//  printf("%s",str);
//}