SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    new_node ->next = llist;
    return new_node ;


}