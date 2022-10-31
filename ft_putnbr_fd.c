/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:02:11 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 13:29:19 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

// #include <fcntl.h>
// int main()
// {
// 	int	fd;

// 	fd = open("file", O_CREAT | O_RDWR);
// 	ft_putnbr_fd(1337, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(42, fd);
// 	ft_putstr_fd(" network", fd);
// 	ft_putchar_fd('\n', fd);
// }