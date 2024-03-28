/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:25:21 by rakman            #+#    #+#             */
/*   Updated: 2024/03/28 21:52:21 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rotate(int *nums, int numsSize, int k)
{
	int	*temp;
	int	i;
	int	j;

	k = k % numsSize;
	j = 0;
	i = k;
	temp = (int *)malloc(sizeof(int) * numsSize);
	while (i <= numsSize - 1)
	{
		temp[j] = nums[i];
		i++;
		j++;
	}
	i = 0;
	while (i < k)
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
