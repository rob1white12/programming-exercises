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

void List_insertAtHead(LinkedList *ll, void *data) {
    Node *newNode = calloc(1, sizeof(Node));
    newNode->next = ll->head;
    newNode->value = data;
    ll->head = newNode;
    ll->size++;
}
