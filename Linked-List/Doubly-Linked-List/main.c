#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    printf("Hello, World");
    return 0;
}
// Core operations
// insert_front(val)
// New node's next = head, head's prev = new node, update head
// O(1)
// insert_end(val)
// Traverse to tail, attach and update both prev and next
// O(n)
// delete_node(node*)
// Rewire predecessor's next and successor's prev, free node
// O(1)
// delete_val(val)
// Search for node, then call delete_node on it
// O(n)
// search(val)
// Same as singly — traverse from head
// O(n)
// print_forward()
// Traverse head → tail using next pointers
// O(n)
// print_backward()
// Traverse tail → head using prev pointers
// O(n)
// free_list()
// Traverse and free all nodes; no double-free
// O(n)
// Key concept: Every insert/delete must update BOTH prev and next.
// Sentinel head/tail nodes make edge cases disappear — consider using them.