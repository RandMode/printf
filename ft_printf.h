/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:48:17 by pnurmi            #+#    #+#             */
/*   Updated: 2025/05/20 13:50:21 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_gethelper(va_list *args, char *str, size_t *counter);
char	ft_putstr(char *str, size_t *counter);
void	ft_putchar(char c, size_t *counter);
int		ft_putnbr(int n, size_t *counter);
int		ft_putnbr_unsigned(unsigned long n, size_t *counter);
int		ft_puthex_low(unsigned long n, size_t *counter);
int		ft_puthex_up(unsigned long n, size_t *counter);
int		ft_putptr(void *ptr, size_t *counter);

#endif