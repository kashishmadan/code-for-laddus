

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int d, int position) {
SinglyLinkedListNode *temp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
int i=0;
SinglyLinkedListNode* current;
current=head;
for(i=0;i<position-1;i++)
{
    head=head->next;
}
temp->next=head->next;
head->next=temp;
temp->data=d;
return current;
}

