/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:26:04 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/08/09 14:56:34 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str [i]);
		i++;
	}
}
