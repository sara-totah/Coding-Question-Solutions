

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* new_linkedlist = new SinglyLinkedListNode(0);
    SinglyLinkedListNode* new_pointer = new_linkedlist;

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            new_pointer->next = head1;
            head1 = head1->next;
        } else {
            new_pointer->next = head2;
            head2 = head2->next;
        }
        new_pointer = new_pointer->next;
    }

    if (head1 != nullptr) {
        new_pointer->next = head1;
    } else if (head2 != nullptr){
        new_pointer->next = head2;
    }

    return new_linkedlist->next; 
}


