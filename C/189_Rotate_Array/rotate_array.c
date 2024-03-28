/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:25:21 by rakman            #+#    #+#             */
/*   Updated: 2024/03/28 22:24:50 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rotate(int *nums, int numsSize, int k)
{
	int	*temp;
	int	i;
	int	j;

	if (numsSize != 1)
	{
		k = k % numsSize;
		i = numsSize - k;
		j = 0;
		temp = (int *)malloc(sizeof(int) * numsSize);
		while (i < numsSize)
		{
			temp[j] = nums[i];
			i++;
			j++;
		}
		i = 0;
		while (i < numsSize - k)
		{
			temp[j] = nums[i];
			i++;
			j++;
		}
		i = 0;
		while (i < numsSize)
		{
			nums[i] = temp[i];
			i++;
		}
	}
}
