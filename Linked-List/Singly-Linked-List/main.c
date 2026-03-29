#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct list
{
    int size;
    struct node *head;
};

struct list *init_list()
{
    struct list *ls = (struct list *)malloc(sizeof(struct list));
    ls->size = 0;
    ls->head = NULL;
    return ls;
}
struct list *push_front(struct list *ls, int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->next = NULL;
    ls->head->next = node;
    ls->size++;
    return ls;
}
struct list *push_back(struct list *ls, int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->next = NULL;
    struct node *temp = ls->head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    return ls;
}
void display(struct list *ls)
{
    struct node *temp = ls->head;
    while (temp != NULL)
    {
        printf("Element: %d", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct list *ls = init_list();
    push_front(ls, 45);
    push_back(ls, 1);
    push_back(ls, 66);
    push_back(ls, 98);
    display(ls);
    return 0;
}
// Core operations
// init()
// Initialize an empty list, set head = NULL
// O(1)
// insert_front(val)
// Create a new node, point it to current head, update head
// O(1)
// insert_end(val)
// Traverse to last node, attach new node
// O(n)
// insert_at(pos, val)
// Traverse to pos-1, rewire pointers around new node
// O(n)
// delete_front()
// Store head, move head = head->next, free old head
// O(1)
// delete_end()
// Traverse to second-last node, free last, set next = NULL
// O(n)
// delete_val(val)
// Find node with matching value, rewire predecessor's next, free it
// O(n)
// search(val)
// Traverse and compare each node's data
// O(n)
// print_list()
// Traverse from head to NULL, print each value
// O(n)
// free_list()
// Traverse and free every node to prevent memory leaks
// O(n)
// Bonus operations
// reverse()
// Iteratively flip all next pointers in a single pass
// O(n)
// find_middle()
// Slow and fast pointer technique — fast moves 2x speed
// O(n)
// detect_cycle()
// Floyd's algorithm — if fast meets slow, cycle exists
// O(n)
// get_length()
// Traverse and count nodes