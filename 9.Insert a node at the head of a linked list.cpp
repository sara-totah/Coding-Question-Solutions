

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    if (llist == nullptr){
        llist = new_node;
    }
    else{
        new_node -> next = llist;
        
        
    }
return new_node;
}

