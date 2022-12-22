/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:22:38 by msodor            #+#    #+#             */
/*   Updated: 2022/10/27 19:33:01 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*final;

	final = NULL;
	while (lst && f)
	{
		ptr = ft_lstnew(f(lst->content));
		ft_lstadd_back(&final, ptr);
		lst = lst->next;
	}
	(void)del;
	return (final);
}
