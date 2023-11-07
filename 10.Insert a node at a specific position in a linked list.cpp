

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
SinglyLinkedListNode* current = llist;
SinglyLinkedListNode* current1 = llist;
current1 = current1 ->next;
for (int i =0; i<position-1; i++){
    current = current -> next;
    current1 = current -> next;
}

current -> next = new_node;
new_node -> next = current1;
return llist;
}

