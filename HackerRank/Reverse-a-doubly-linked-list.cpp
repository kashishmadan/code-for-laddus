

// Complete the reverse function below.

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
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode *temp=head,*last=head;
int size=0;
while(last->next!=NULL)
{
    last=last->next;
    size++;
}
int swap=0,count=0;
while(temp!=last && count<=(size/2))
{
    count++;
    swap=temp->data;
    temp->data=last->data;
    last->data=swap;
    temp=temp->next;
    last=last->prev;
}
return head;
}

