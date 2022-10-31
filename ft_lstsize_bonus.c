/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:11:49 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 13:58:21 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list	*head;
// 	t_list 	*tmp;
// 	int		s;

// 	head = ft_lstnew(ft_itoa(100));
// 	tmp = head;
// 	for (int i=1; i<10; i++)
// 	{
// 		ft_lstadd_back(&tmp, ft_lstnew(ft_itoa(100+i)));
// 		tmp = tmp->next;
// 	}
// 	s = ft_lstsize(head);
// 	while (head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// 	printf("the list size is : %d\n", s);
// }