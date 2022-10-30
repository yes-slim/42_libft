/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:13:03 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/30 21:20:19 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		(*f)(tmp->content);
		tmp = tmp->next;
	}
}

// void	ft_(void *content)
// {
// 	char *str;
// 	int i;

// 	str = (char *)content; 
// 	for(i=0; str[i]!='\0'; i++)
// 		str[i] = '*';
// }
// // int main()
// {
// 	t_list *head;
// 	t_list	*tmp;
// 	t_list	*tmp2;
// 	int i;

// 	head = ft_lstnew(ft_strdup("hellow"));
// 	tmp = head;
// 	tmp2 = head;
// 	for(i=0; i<9; i++)
// 		ft_lstadd_back(&head, ft_lstnew(ft_strdup("12345")));
// 	ft_lstiter(tmp2, ft_);
// 	while (tmp)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }