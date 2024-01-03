/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:46:07 by aulicna           #+#    #+#             */
/*   Updated: 2024/01/03 12:09:35 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

int	format_str(char *s)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

void	format_num(long long int num, int base, int *printed)
{
	if (num < 0)
	{
		write(1, "-", 1);
		*printed += 1;
		num = num * (-1);
	}
	if (num >= base)
		format_num(num / base, base, printed);
	write(1, &"0123456789abcdef"[num % base], 1);
	*printed += 1;
}

void	format_decision(char s, int *printed, va_list args)
{
	if (s == 's')
		*printed += format_str(va_arg(args, char *));
	else if (s == 'd')
		format_num((long long int)(va_arg(args, int)), 10, printed);
	else if (s == 'x')
		format_num((long long int)(va_arg(args, unsigned int)),
			16, printed);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		printed;
	va_list	args;

	i = 0;
	printed = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			format_decision(s[i + 1], &printed, args);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			printed += 1;
		}
		i++;
	}
	va_end(args);
	return (printed);
}

//#include <stdio.h>
//
//int	main(void)
//{	
//	printf("%d\n", ft_printf("%s\n", "toto"));
//	printf("%d\n", printf("%s\n", "toto"));
//
//	printf("%d\n", ft_printf("%d\n", 42));
//	printf("%d\n", printf("%d\n", 42));
//
//	printf("%d\n", ft_printf("%x\n", 42));
//	printf("%d\n", printf("%x\n", 42));
//	return (0);
//}