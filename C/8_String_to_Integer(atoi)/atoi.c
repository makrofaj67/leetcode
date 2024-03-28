/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:08:37 by rakman            #+#    #+#             */
/*   Updated: 2024/03/26 21:19:52 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	myAtoi(char *s)
{
	int			i;
	long long	result;

	i = 1;
	result = 0;
	while ((*s <= 13 && *s >= 9) || (*s == 32))
	{
		s++;
	}
	if (*s == '-')
	{
		i = i * -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	else if (!(*s >= '0' && *s <= '9'))
		return (0);
	while (*s >= '0' && *s <= '9')
	{
		result = (*s - 48) + result * 10;
		if (result >= 2147483647 && i == 1)
		{
			result = 2147483647;
			return ((int)result);
		}
		else if (result >= 2147483648 && i == -1)
		{
			result = -2147483648;
			return ((int)result);
		}
		s++;
	}
	return ((int)result * i);
}
