// Core operations
// init(capacity)
// Allocate array, set front = rear = -1
// O(1)
// enqueue(val)
// Check full, advance rear with modulo wrap, write value
// O(1)
// dequeue()
// Check empty, read front value, advance front with modulo wrap
// O(1)
// front()
// Peek at front without removing
// O(1)
// rear()
// Peek at rear without removing
// O(1)
// is_empty()
// Return front == -1
// O(1)
// is_full()
// Return (rear + 1) % capacity == front
// O(1)
// size()
// Calculate using front, rear and capacity
// O(1)
// Variants to implement
// Deque (double-ended)
// Supports insert and delete from both front and rear
// O(1)
// Priority Queue (basic)
// Enqueue with priority, always dequeue highest priority first
// O(n)