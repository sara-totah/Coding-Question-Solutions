

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
        if (head == nullptr){
            head = new_node;
        }else {
            SinglyLinkedListNode* current = head;
        // Iterate to find the last node.
        while (current->next != nullptr) {
            current = current->next;
        }

        // Link the last node to the new node and set new_node's next to nullptr.
        current->next = new_node;
        new_node->next = nullptr;
    }

    return head;
}

