/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgeiger <sgeiger@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:14:58 by sgeiger           #+#    #+#             */
/*   Updated: 2023/11/08 17:43:48 by sgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int		count;
	char	*str;

	str = ft_itoa(n);
	if (str == NULL)
		return (-1);
	count = ft_print_string(str);
	free(str);
	if (count == -1)
		return (-1);
	return (count);
}
