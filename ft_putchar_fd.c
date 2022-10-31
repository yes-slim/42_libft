/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:17:16 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 13:57:37 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int main()
// {
// 	int fd;

// 	fd = open("file", O_CREAT | O_RDWR, 777);
// 	ft_putchar_fd('1', fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putchar_fd('3', fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putchar_fd('3', fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putchar_fd('7', fd);
// 	ft_putchar_fd('\n', fd);
// }