/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:12:06 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 12:54:12 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (tmp);
}

// int main()
// {
// 	t_list *head;
// 	t_list	*tmp;
// 	t_list	*tmp2;
// 	int i;

// 	head = ft_lstnew(ft_strdup("hellow"));
// 	tmp = head;
// 	for(i=0; i<9; i++)
// 		ft_lstadd_back(&head, ft_lstnew(ft_strdup("12345")));
// 	tmp2 = ft_lstlast(head);
// 	tmp2->content = "i'm the last node";
// 	while (tmp)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }