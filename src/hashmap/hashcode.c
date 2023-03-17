#include "libft.h"

t_hashmap	*new_hash() {
	int			i;
	t_hashmap	*hashmap;

	hashmap = ft_calloc(1, sizeof(t_hashmap));
	if (!hashmap)
		return (NULL);
	hashmap->cap = 8;
	hashmap->len = 0;
	hashmap->list = ft_calloc(hashmap->cap, sizeof(t_hashpair));
	i = 0;
	while (i < hashmap->cap) {
		if (!(hashmap->list[i])) {
			while (i > 0) {
				i--;
				free(hashmap->list[i]);
			}
			free(hashmap);
			return (NULL);
		}
		i++;
	}
	return (hashmap);
}

unsigned int code_hash(t_hashmap *hashmap, char *key) {
	unsigned int code;

	code = 0;
	while (*key != '\0') {
		code = *key + 31 * code;
		key++;
	}
	return (code % (hashmap->cap));
}

int	get_hash(t_hashmap *hashmap, char *key) {
	t_hashpair *current;

	current = hashmap->list[hashcode(hashmap, key)];
	while (current) {
		if (ft_strcmp(current->key, key)) {
			return (current->value);
		}
		current = current->next;
	}
	return (-1);
}
