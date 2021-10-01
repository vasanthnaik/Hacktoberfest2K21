Node* reverse(Node *head){
    if(!head||!head->next)
        return head;
    Node *prev=NULL,*cur=NULL,*nextnode=head;
    while(nextnode){
        cur = nextnode;
        nextnode = nextnode->next;
        cur->next = prev;
        prev = cur;
    }
    return prev;
}
Node* addutil(Node *head,int i){
    Node* tmp=head;
    if(tmp==NULL){
        Node* nn = new Node(i);
        return nn;
    }
    if(tmp!=NULL && tmp->data+1<10){
        tmp->data = tmp->data+1;
        return tmp;
    }
    if(tmp!=NULL && tmp->data+1==10){
        tmp->data = 0;
        tmp->next = addutil(tmp->next,1);
        return tmp;
    }   
}
Node* addOne(Node *head) 
{
    // Your Code here
    // return head of list after adding one
    Node *hold = reverse(head);
    Node *tmp = addutil(hold,1);
    head = reverse(hold);
    return head;
}