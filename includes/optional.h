#ifndef OPTIONAL_H
# define OPTIONAL_H

# include "types.h"

typedef void *t_opt;

t_opt	o_filterp(t_opt optional, t_bipredicate predicate, void *param);
t_opt	o_filter(t_opt optional, t_predicate predicate);
void	o_if_presentp(t_opt optional, t_biconsumer consumer, void *param);
void	o_if_present(t_opt optional, t_consumer consumer);
void	*o_else_getp(t_opt optional, t_function function, void *param);
void	*o_else_get(t_opt optional, t_supplier supplier);
t_opt	o_mapp(t_opt optional, t_bifunction function, void *param);
t_opt	o_map(t_opt optional, t_function function);
void	*o_else(t_opt optional, void *other);

#endif
