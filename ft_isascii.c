/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatala- <fcatala-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:23:33 by fcatala-          #+#    #+#             */
/*   Updated: 2022/10/31 11:54:32 by fcatala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
