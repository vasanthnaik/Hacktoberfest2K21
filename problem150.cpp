int count(Node* head){
    if(!head)
        return 0;
    return 1+count(head->next);
}
int check(Node* t1, Node* t2){
    while(t1 && t2){
        if(t1->next == t2->next)
            return t1->next->data;
        t1=t1->next;
        t2=t2->next;
    }
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node*t1=head1;
    int n1 = count(t1);
    Node*t2=head2;
    int n2 = count(t2);
    int d = abs(n1-n2);
    Node *t = NULL;
    if(n1>n2){
        t = t1;
        while(d--)
            t=t->next;
        return check(t,t2);
    }
    else{
        t = t2;
        while(d--)
            t=t->next;
        return check(t1,t);
    }
    return -1;
}