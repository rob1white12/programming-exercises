#include "llist.h"
#include <stdlib.h>

LinkedList *List_create() {
    return calloc(1, sizeof(LinkedList));
}

int List_size(LinkedList *ll) {
    return ll->size;
}

int List_empty(LinkedList *ll) {
    return (ll->size == 0);
}
