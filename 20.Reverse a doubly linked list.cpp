

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
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

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* prev = nullptr;
    DoublyLinkedListNode* current = llist;
    DoublyLinkedListNode* next = nullptr;

    
    while (current != nullptr){
        prev = current -> prev; //null
        next = current -> next; //2
        
        current -> prev = next; //2
        current -> next = prev; //null
        
        current = current ->prev; 
        
    }
    
     if (prev != NULL)
        llist = prev->prev;

    return llist;
}

