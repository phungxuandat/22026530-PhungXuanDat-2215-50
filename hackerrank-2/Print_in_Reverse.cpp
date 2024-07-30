void reversePrint(SinglyLinkedListNode* llist) {
    stack<SinglyLinkedListNode*> nodeStack;
    SinglyLinkedListNode* cr = llist;
    while (cr) {
        nodeStack.push(cr);
        cr = cr->next;
    }
    while (!nodeStack.empty()) {
        cout << nodeStack.top()->data << endl;
        nodeStack.pop();
    }

}