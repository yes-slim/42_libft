/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:12:23 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/30 21:18:40 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new)
	{
		if (*lst)
		{
			tmp = ft_lstlast(*lst);
			tmp->next = new;
		}
		else
			*lst = new;
	}
}

// int main()
// {
// 	t_list *s_list;
// 	s_list = ft_lstnew(ft_strdup("123"));
// 	ft_lstadd_back(&s_list, ft_lstnew(ft_strdup("456")));
// 	while (s_list)
// 	{
// 		printf("%s", s_list->content);
// 		s_list = s_list->next;
// 	}
// }