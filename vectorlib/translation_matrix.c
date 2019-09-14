/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:35:55 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:35:59 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_matrix_4x4	translation_matrix(t_vector v)
{
	t_matrix_4x4	res;

	res = identity_matrix();
	res.matrix[3][0] = v.x;
	res.matrix[3][1] = v.y;
	res.matrix[3][2] = v.z;
	return (res);
}
