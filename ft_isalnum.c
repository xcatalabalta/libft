/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatala- <fcatala-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:19:34 by fcatala-          #+#    #+#             */
/*   Updated: 2022/10/31 11:52:18 by fcatala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int n)
{
	if (((n >= 65) & (n <= 90)) || ((n >= 97) & (n <= 122))
		|| ((n >= 48) & (n <= 57)))
		return (1);
	else
		return (0);
}