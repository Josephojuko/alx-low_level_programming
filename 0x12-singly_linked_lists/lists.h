#ifndef LISTS_H
#define LISTS_H
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
* Description: singly linked list node structure
* for Holberton project
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *j);
size_t list_len(const list_t *j);
list_t *add_node(list_t **head, const char *str);
list_t *added_noded_ended(list_t **hed, const char *str);
void freed_listed(list_t *hed);
#endif
