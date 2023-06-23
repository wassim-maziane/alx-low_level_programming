#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
  size_t cnt = 0;

  while (h)
  {
    cnt++;
    h = h -> next;
  }
  return (cnt);
}
