/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removeduplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:45:20 by rakman            #+#    #+#             */
/*   Updated: 2024/03/28 21:17:39 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	removeDuplicates(int *nums, int numsSize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (numsSize <= 1)
	{
		return (numsSize);
	}
	while (j < numsSize)
	{
		if (nums[i] != nums[j])
		{
			i++;
			nums[i] = nums[j];
		}
		j++;
	}
	return (i + 1);
}
