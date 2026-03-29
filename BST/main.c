// Core operations
// insert(val)
// Recursively find the correct leaf position and create node
// O(log n)
// search(val)
// Recursively go left if smaller, right if larger
// O(log n)
// delete(val)
// 3 cases: leaf, one child, two children (inorder successor)
// O(log n)
// inorder()
// Left → Root → Right — prints sorted output
// O(n)
// preorder()
// Root → Left → Right — used for tree copying
// O(n)
// postorder()
// Left → Right → Root — used for tree deletion
// O(n)
// find_min()
// Traverse left until no left child exists
// O(log n)
// find_max()
// Traverse right until no right child exists
// O(log n)
// height()
// Recursively: 1 + max(height(left), height(right))
// O(n)
// Bonus operations
// level_order()
// BFS using a queue — visit level by level
// O(n)
// is_bst()
// Validate BST property across entire tree using min/max bounds
// O(n)
// inorder_successor()
// Smallest node that is greater than given node
// O(log n)
// free_tree()
// Postorder traversal — delete children before parent