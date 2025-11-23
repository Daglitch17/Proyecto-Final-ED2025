# Decision Questions (6 questions)

1. Do you need fast random access by index? (yes/no)
   - Distinguishes arrays/dynamic arrays from linked lists.

2. Will you do frequent insertions/deletions in the middle of the sequence? (yes/no)
   - Favors linked lists.

3. Are key->value lookups primary? (yes/no)
   - Favors hash tables.

4. Do you need ordering or range queries? (yes/no)
   - Favors trees/BSTs.

5. Is priority-based access required? (yes/no)
   - Favors heaps/priority queues.

6. Are relationships graph-like (nodes & arbitrary edges)? (yes/no)
   - Favors graphs (adjacency list/matrix).
