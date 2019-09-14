/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_vector_by_x_z.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:35:15 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:35:16 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	rotation_vector_by_x_z(t_vector v, double x, double z)
{
	v = vector_matrix_multiply(v, matrix_multiply(
		x_rotation_matrix(-z), z_rotation_matrix(-x)));
	return (v);
}
