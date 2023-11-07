

/*
 * Complete the 'reversePrint' function below.
 *
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* next = nullptr;
    SinglyLinkedListNode* current = llist;
    SinglyLinkedListNode* prev = nullptr;

    while (current != nullptr){
        next = current->next;
        current -> next = prev;
        prev = current;
        current = next;
    }

    while (prev != nullptr){
        cout << prev ->data << endl;
        prev = prev -> next;
    }
    
}

