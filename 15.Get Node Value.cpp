

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* current = llist;
    SinglyLinkedListNode* next = nullptr;
    
    while (current != nullptr) {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    llist = prev;
    
    for (int i=0; i<positionFromTail; i++){
        llist = llist -> next;
    }
    
    return llist -> data;
}

