# Decision Rules

Rules are applied deterministically in order; the first matching rule is selected.

1. IF graph_like = yes => Graph (adjacency list)
2. ELSE IF key_value_lookup = yes => Hash Table
3. ELSE IF priority = yes => Heap / Priority Queue
4. ELSE IF ordering_or_range = yes => Binary Search Tree (BST)
5. ELSE IF random_access = yes AND mid_insertions = no => Dynamic Array
6. ELSE IF mid_insertions = yes => Doubly Linked List
7. ELSE => Queue (default)

Each rule has a short rationale in the code's `decision_system.c`.
