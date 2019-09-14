/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_sum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:32:47 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:32:49 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_matrix_4x4	matrix_sum(t_matrix_4x4 a, t_matrix_4x4 b)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
			a.matrix[i][j] += b.matrix[i][j];
	return (a);
}
