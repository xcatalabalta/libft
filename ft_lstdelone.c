/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatala- <fcatala-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:31:27 by fcatala-          #+#    #+#             */
/*   Updated: 2022/12/30 15:00:20 by fcatala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// Why does 'free(lst)' only frees lst and not next?
// How could I free lst->next? 

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
