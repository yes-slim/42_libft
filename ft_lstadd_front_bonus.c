/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:11:43 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/30 10:26:52 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!new || !lst)
		return ;
	head = *lst;
	new->next = head;
	*lst = new;
}
// int main()
// {
// 	t_list *s_list;
// 	s_list = ft_lstnew(ft_strdup("456"));
// 	ft_lstadd_front(&s_list, ft_lstnew(ft_strdup("123")));
// 	while (s_list)
// 	{
// 		printf("%s", s_list->content);
// 		s_list = s_list->next;
// 	}
// }