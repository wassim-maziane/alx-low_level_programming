#ifndef _LISTS_H
#define _LISTS_H
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: lenght of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
int _putchar(int ch);
size_t print_list(const list_t *h);
#endif
