/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_matrix_multiply.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:37:29 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:37:30 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector_matrix_multiply(t_vector v, t_matrix_4x4 m)
{
	t_vector	res;

	res.x = v.x * m.matrix[0][0] +
			v.y * m.matrix[1][0] +
			v.z * m.matrix[2][0] +
			v.w * m.matrix[3][0];
	res.y = v.x * m.matrix[0][1] +
			v.y * m.matrix[1][1] +
			v.z * m.matrix[2][1] +
			v.w * m.matrix[3][1];
	res.z = v.x * m.matrix[0][2] +
			v.y * m.matrix[1][2] +
			v.z * m.matrix[2][2] +
			v.w * m.matrix[3][2];
	res.w = v.x * m.matrix[0][3] +
			v.y * m.matrix[1][3] +
			v.z * m.matrix[2][3] +
			v.w * m.matrix[3][3];
	return (res);
}
