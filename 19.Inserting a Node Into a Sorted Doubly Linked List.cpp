

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* new_node = new DoublyLinkedListNode(data);
    
    if (llist == nullptr) {
        return new_node;
    }
    
    DoublyLinkedListNode* pointer = llist;
    DoublyLinkedListNode* prev_node = nullptr;

    while (pointer != nullptr) {
        if (pointer->data >= new_node->data) {
            new_node->prev = pointer->prev;
            pointer->prev = new_node;
            
            if (new_node->prev != nullptr) {
                new_node->prev->next = new_node;
            } else {
                llist = new_node;
            }
            new_node->next = pointer;
            break;
        } else {
            prev_node = pointer;
            pointer = pointer->next;
        }
    }

    if (pointer == nullptr) {
        // If the new node should be inserted at the end, update the tail of the list.
        prev_node->next = new_node;
        new_node->prev = prev_node;
    }

    return llist;
}


