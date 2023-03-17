#include "libft.h"

t_hashmap	*new_hash() {
	unsigned int			i;
	t_hashmap	*hashmap;

	hashmap = ft_calloc(1, sizeof(t_hashmap));
	if (!hashmap)
		return (NULL);
	hashmap->cap = 8;
	hashmap->len = 0;
	hashmap->list = ft_calloc(hashmap->cap, sizeof(t_hashpair *));
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

	current = hashmap->list[code_hash(hashmap, key)];
	while (current) {
		if (ft_strcmp(current->key, key)) {
			return (current->value);
		}
		current = current->next;
	}
	return (-1);
}

int	set_hash(t_hashmap *hashmap, char *key, int value) {
	unsigned int	index;
	t_hashpair		*current;
	t_hashpair		*new_hash;

	index = code_hash(hashmap, key);
	current = hashmap->list[index];
	while (current) {
		if (!ft_strcmp(current->key, key)) {
			current->value = value;
			return (0);
		}
		current = current->next;
	}
	new_hash = malloc(sizeof(t_hashpair));
	if (!new_hash)
		return (1);
	new_hash->key = key;
	new_hash->value = value;
	new_hash->next = hashmap->list[index];
	hashmap->list[index] = new_hash;
	hashmap->len++;
	return (0);
}
