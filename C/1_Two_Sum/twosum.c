/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twosum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:59:05 by rakman            #+#    #+#             */
/*   Updated: 2024/03/26 19:26:38 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

int	*twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	result = 0;
	while (i + 1 < numsSize)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[j] + nums[i] == target)
			{
				returnSize = (int *)malloc(sizeof(int) * 2);
				returnSize[0] = nums[i];
				returnSize[1] = nums[j];
				return (returnSize);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
