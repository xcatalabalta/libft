/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatala- <fcatala-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:38:25 by fcatala-          #+#    #+#             */
/*   Updated: 2022/10/31 11:53:13 by fcatala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int n)
{
	if (((n >= 65) & (n <= 90)) || ((n >= 97) & (n <= 122)))
		return (1);
	return (0);
}
