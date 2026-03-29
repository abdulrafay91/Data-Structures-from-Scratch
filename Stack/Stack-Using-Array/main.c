#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

// Core operations
// init(capacity)
// Allocate array of given size, set top = -1
// O(1)
// push(val)
// Check for overflow, increment top, write value
// O(1)
// pop()
// Check for underflow, read top value, decrement top
// O(1)
// peek()
// Return value at top without removing
// O(1)
// is_empty()
// Return top == -1
// O(1)
// is_full()
// Return top == capacity - 1
// O(1)
// size()
// Return top + 1
// O(1)
// Bonus — apply the stack
// is_balanced(str)
// Push opening brackets, pop and match on closing brackets
// O(n)
// infix_to_postfix()
// Classic compiler/parsing exercise using operator precedence

int main()
{

    return 0;
}