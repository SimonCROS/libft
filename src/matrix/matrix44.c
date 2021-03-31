#include "libft.h"

t_vector3	mat44_mul_vec(t_matrix44 m, t_vector3 in)
{
	t_vector3	out;

	out.x = in.x * m.e[0][0] + in.y * m.e[1][0] + in.z * m.e[2][0] + m.e[3][0];
	out.y = in.x * m.e[0][1] + in.y * m.e[1][1] + in.z * m.e[2][1] + m.e[3][1];
	out.z = in.x * m.e[0][2] + in.y * m.e[1][2] + in.z * m.e[2][2] + m.e[3][2];
	return (out);
}

t_matrix44	mat44_null(void)
{
	t_matrix44	out;
	int			i;
	int			j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			out.e[i][j] = 0;
	}
	return (out);
}

t_matrix44	mat44_inverse(t_matrix44 m)
{
	t_matrix44	rev;
	float matrix[4][8], ratio,a;
	int i, j, k;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			matrix[i][j] = m.e[i][j];
	}

	for (i = 0; i < 4; i++){
		for (j = 4; j < 2*4; j++){
			if (i==(j-4))
				matrix[i][j] = 1.0;
			else
				matrix[i][j] = 0.0;
		}
	}
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if (i!=j){
				ratio = matrix[j][i] / matrix[i][i];
				for (k = 0; k < 2*4; k++){
					matrix[j][k] -= ratio * matrix[i][k];
				}
			}
		}
	}
	for (i = 0; i < 4; i++){
		a = matrix[i][i];
		for (j = 0; j < 2*4; j++){
			matrix[i][j] /= a;
		}
	}

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			rev.e[i][j] = matrix[i][4 + j];
	}
	return (rev);
}
