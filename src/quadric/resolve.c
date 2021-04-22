/**
 * @author Lucille Burnet (lburnet@student.42lyon.fr),
 * Simon Cros (scros@student.42lyon.fr)
 */

#include <math.h>

#include "libft.h"

//give coeff a,b,c from at^2+bt+c=0
static t_vector3	inter_quad_line_coeff(t_quadric *quad,
		t_vector3 *c, t_vector3 *r)
{
	t_vector3	abc;

	abc.x = quad->a * pow(r->x, 2) + quad->b * pow(r->y, 2) + quad->c
		* pow(r->z, 2) + 2 * quad->d * r->y * r->z + 2 * quad->e * r->x
		* r->z + 2 * quad->f * r->x * r->y;
	abc.y = 2 * quad->a * c->x * r->x + 2 * quad->b * c->y * r->y + 2
		* quad->c * c->z * r->z + 2 * quad->d * c->z * r->y + 2
		* quad->d * c->y * r->z + 2 * quad->e * c->x * r->z + 2
		* quad->e * c->z * r->x + 2 * quad->f * c->x * r->y + 2
		* quad->f * c->y * r->x + quad->g * r->x + quad->h * r->y
		+ quad->i * r->z;
	abc.z = quad->a * pow(c->x, 2) + quad->b * pow(c->y, 2) + quad->c
		* pow(c->z, 2) + 2 * quad->d * c->y * c->z + 2 * quad->e * c->x
		* c->z + 2 * quad->f * c->x * c->y + quad->g * c->x + quad->h
		* c->y + quad->i * c->z + quad->j;
	return (abc);
}

//abc.a != 0 !!!!!!!
static float	discriminant(t_vector3 abc)
{
	float	delta;

	if (abc.x == 0)
		return (0);
	delta = pow(abc.y, 2) - 4 * abc.x * abc.z;
	return (delta);
}

//give smaller and positive solution if possible of ax^2+bx+c=0
//need to verify the result is pos
static float	inter_quad_line_sol(t_vector3 abc, float d)
{
	float	t1;
	float	t2;

	if (abc.x == 0 && abc.y != 0)
		return (-abc.z / abc.y);
	if (d == 0)
		return (-abc.y * 0.5 / abc.x);
	t1 = (-abc.y - sqrtf(d)) * 0.5 / abc.x;
	t2 = (-abc.y + sqrtf(d)) * 0.5 / abc.x;
	if (t1 > 0 && t2 > 0)
		return (fminf(t1, t2));
	return (fmaxf(t1, t2));
}

float	resolve_quad(t_quadric *quad, t_vector3 *c, t_vector3 *r)
{
	t_vector3	abc;
	float		d;

	abc = inter_quad_line_coeff(quad, c, r);
	d = discriminant(abc);
	if (d < 0)
		return (0);
	return (inter_quad_line_sol(abc, d));
}
