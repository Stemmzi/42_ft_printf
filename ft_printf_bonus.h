/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgeiger <sgeiger@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:07:47 by sgeiger           #+#    #+#             */
/*   Updated: 2024/01/24 22:21:50 by sgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_flag
{
	int	i_flag;
}	t_flag;

int		ft_printf(const char *ptr, ...);
int		ft_print_char_bonus(int c);
int		ft_print_string_bonus(char *str);
int		ft_print_vptr_bonus(unsigned long n);
int		ft_print_hexa_bonus(unsigned long n, int flag);
char	*ft_hexa_bonus(unsigned long n, int flag);
int		ft_print_nbr_bonus(int i);
int		ft_print_unsigned_bonus(unsigned int u);
int		ft_flags_bonus(va_list args, char flag, t_flag *s1, const char *ptr);

#endif
