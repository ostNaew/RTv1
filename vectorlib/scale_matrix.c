/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:35:33 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:35:35 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_matrix_4x4	scale_matrix(double a, double b, double c)
{
	t_matrix_4x4	res;

	res = identity_matrix();
	res.matrix[0][0] = a;
	res.matrix[1][1] = b;
	res.matrix[2][2] = c;
	return (res);
}
