/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *temp = head;
    // Using malloc :
    //struct Node *val = (struct Node*)malloc(sizeof(struct Node));
    Node *val = new Node();
    val->data = data;
    val->next = NULL;
    if(head == NULL){
        head = val;
        return head;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=val;
    return head;
}
