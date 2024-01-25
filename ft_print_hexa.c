/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgeiger <sgeiger@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:50:45 by sgeiger           #+#    #+#             */
/*   Updated: 2024/01/24 22:21:01 by sgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long n, int flag)
{
	char	*str;
	int		count;

	str = ft_hexa(n, flag);
	if (str == NULL)
		return (-1);
	count = ft_print_string(str);
	free(str);
	if (count == -1)
		return (-1);
	return (count);
}
