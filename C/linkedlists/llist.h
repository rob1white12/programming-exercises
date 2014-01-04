#ifndef llist_h
#define llist_h

struct Node;

typedef struct Node {
    struct Node *next;
    void *value;
} Node;

typedef struct LinkedList {
    Node *head;
    int size;
} LinkedList;

LinkedList *List_create();
int List_size(LinkedList *list);
void List_insertAtHead(LinkedList *list);
int List_empty(LinkedList *list);

#endif
