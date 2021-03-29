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

static int	mat44_inverse3(t_matrix44 *m, int i)
{
	int		j;
	int		k;
	float	f;

	f = m->e[i][i];
	if (f == 0)
		return (FALSE);
	j = -1;
	while (++j < 4)
		m->e[i][j] /= f;
	j = -1;
	while (++j < i)
	{
		f = m->e[j][i];
		k = -1;
		while (++k < 4)
			m->e[j][k] -= f * m->e[i][k];
	}
	return (TRUE);
}

static int	mat44_inverse2(t_matrix44 *m, int i, int pivot)
{
	float	tmp;
	int		j;
	int		k;

	if (pivot != i)
	{
		j = -1;
		while (++j < 4)
		{
			tmp = m->e[i][j];
			m->e[i][j] = m->e[pivot][j];
			m->e[pivot][j] = tmp;
		}
	}
	j = i;
	while (++j < 4)
	{
		tmp = m->e[j][i] / m->e[i][i];
		k = -1;
		while (++k < 4)
			m->e[j][k] -= tmp * m->e[i][k];
	}
	return (TRUE);
}

static int	mat44_inverse1(t_matrix44 *m, int i)
{
	int		j;
	int		pivot;
	float	pivotsize;
	float	tmp;

	j = -1;
	pivot = i;
	pivotsize = m->e[i][i];
	if (pivotsize < 0)
		pivotsize = -pivotsize;
	while (++j < 3)
	{
		tmp = m->e[j][i];
		if (tmp < 0)
			tmp = -tmp;
		if (tmp > pivotsize)
		{
			pivot = j;
			pivotsize = tmp;
		}
	}
	if (pivotsize == 0)
		return (FALSE);
	return (mat44_inverse2(m, i, pivot));
}

t_matrix44	mat44_inverse(t_matrix44 m)
{
	t_matrix44	t;
	int			i;

	t = m;
	i = -1;
	while (++i < 3)
		if (!mat44_inverse1(&t, i))
			return (mat44_null());
	i = 4;
	while (--i >= 3)
		if (!mat44_inverse3(&t, i))
			return (mat44_null());
	return (t);
}
