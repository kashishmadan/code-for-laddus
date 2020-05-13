

// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int d) {
DoublyLinkedListNode *temp = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
temp->data=d;
temp->next=NULL;
temp->prev=NULL;
DoublyLinkedListNode *current=head;
if(head==NULL)
 return temp;
else if(d <= head->data)
{
    temp->prev=head->prev;
    head->prev=temp;
    temp->next=head;
    return temp;
}
else 
{
    DoublyLinkedListNode *n1 = NULL, *n2=head;
        while (n2!=NULL && n2->data < d) {
            n1 = n2;
            n2 = n2->next;
        }
        if (n2 == NULL) { // insert at end of list
            n1->next = temp;
            temp->prev = n1;
        } else { // insert in empty list
            n1->next = temp;
            n2->prev = temp;
            temp->prev = n1;
            temp->next = n2;
        }
        return head;
}
}

