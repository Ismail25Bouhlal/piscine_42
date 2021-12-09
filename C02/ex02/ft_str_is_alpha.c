/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:14:31 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/08/15 15:08:25 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str [i] >= 'A' && str[i] <= 'Z')
				|| (str [i] >= 'a' && str[i] <= 'z')))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
