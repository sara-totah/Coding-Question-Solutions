

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* next = head;
    if (current == nullptr){
        return 0;
    }
    else{
    while (current != nullptr && next != nullptr && next->next != nullptr){
        current = current -> next;
        next = next -> next -> next;
        
        if (current == next){
            return 1;
        }
    }
    }
    return 0;

}

