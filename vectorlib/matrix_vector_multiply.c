/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_vector_multiply.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:33:01 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:33:04 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	matrix_vector_multiply(t_matrix_4x4 m, t_vector v)
{
	t_vector	res;

	res.x = m.matrix[0][0] * v.x +
			m.matrix[0][1] * v.y +
			m.matrix[0][2] * v.z +
			m.matrix[0][3] * v.w;
	res.y = m.matrix[1][0] * v.x +
			m.matrix[1][1] * v.y +
			m.matrix[1][2] * v.z +
			m.matrix[1][3] * v.w;
	res.z = m.matrix[2][0] * v.x +
			m.matrix[2][1] * v.y +
			m.matrix[2][2] * v.z +
			m.matrix[2][3] * v.w;
	res.w = m.matrix[3][0] * v.x +
			m.matrix[3][1] * v.y +
			m.matrix[3][2] * v.z +
			m.matrix[3][3] * v.w;
	return (res);
}
