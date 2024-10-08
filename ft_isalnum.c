/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshpilev <vshpilev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:34:14 by vshpilev          #+#    #+#             */
/*   Updated: 2024/04/25 12:28:42 by vshpilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!((c >= 65 && c <= 90) || \
		(c >= 97 && c <= 122) || (c >= 48 && c <= 57)))
		return (0);
	else
		return (1);
}
