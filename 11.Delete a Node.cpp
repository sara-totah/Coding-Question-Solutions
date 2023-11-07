

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* current = llist;
    SinglyLinkedListNode* current_next = llist -> next;
    
    if (position == 0){
        return current_next;
    }else{
    for (int i=0; i< position-1;i++){
        current = current -> next;
        current_next = current_next -> next;
    }
    current_next = current_next -> next;
    current -> next = current_next;

}
    return llist;
}

