#include "header.h"

void addRec(lst* list)
{
  if (list->size == 0) {
    /* first entry */
    nav *firstNav = new nav;
    firstNav->data = new dat;
    firstNav->prev = NULL;
    firstNav->next = NULL;

    /* class data */
    dat *firstDat = firstNav->data;
    kbdInput(firstDat);

    /* assign to list and increment list size */
    list->first = firstNav;
    list->last = firstNav;
    list->size++;

  } else {
    /* navigate to new entry */
    nav *currentnav = list->first;
    for (int i = 1; i < list->size; i++) {
      currentnav = currentnav->next;
    }

    /* new entry */
    nav *newNav = new nav;
    newNav->prev = currentnav;
    newNav->next = NULL;
    newNav->data = new dat;

    /* class data */
    dat *newDat = newNav->data;
    kbdInput(newDat);

    /* assignment */
    currentnav->next = newNav;
    list->last = currentnav->next;
    ++list->size;
  }
}
