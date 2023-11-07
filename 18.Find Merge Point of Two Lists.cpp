

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    // Create two pointers for each linked list.
    SinglyLinkedListNode* current1 = head1;
    SinglyLinkedListNode* current2 = head2;

    // Traverse both linked lists until they meet at the merge point.
    while (current1 != current2) {
        // If we reach the end of one list, move to the other list.
        if (current1->next == nullptr) {
            current1 = head2;
        } else {
            current1 = current1->next;
        }

        if (current2->next == nullptr) {
            current2 = head1;
        } else {
            current2 = current2->next;
        }
    }

    // When the loops exit, the two pointers will meet at the merge point.
    return current1->data;
}


