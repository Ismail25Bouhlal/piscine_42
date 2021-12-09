/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:13:57 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/08/24 16:30:58 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_print_params(int ac, char **ag)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr (ag[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **ag)
{
	int	i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(ag[i + 1], ag[i]) < 0)
		{
			ft_swap(&ag[i], &ag[i + 1]);
			i = 1;
		}
		else
		{
			i++;
		}
	}
	ft_print_params(ac, ag);
	return (0);
}
