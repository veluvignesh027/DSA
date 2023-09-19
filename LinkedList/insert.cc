#ifndef MAIN_H
    #include "main.h"
#endif

bool insertAtBegin(Node**,int);
bool insertAtEnd(Node**,int);
bool insertAtPos(Node**,int,int);

void Insert(Node **head){
    int data,choice;
    cout<<endl<<"Enter the Data You Want to INSERT : ";
    cin>>data;
    system("cls");
    cout<<endl<<"1. Insert at Begining";
    cout<<endl<<"2. Insert at End";
    cout<<endl<<"3. Insert at a Position";
    cout<<endl<<"Enter the Mode You Want to INSERT the Data: ";
    cin>>choice;
    system("cls");
    switch (choice)
    {
    case 1:
        insertAtBegin(head,data);
        break;
    case 2:
        insertAtEnd(head,data);
        break;
    case 3:
        cout<<endl<<"Enter The Position : ";
        int pos;cin>>pos;
        insertAtPos(head,pos,data);
        break;
    default:
        cout<<"Invalid Option!"<<endl;
        Insert(head);
        break;
    }

}


bool insertAtBegin(Node **head,int data){
    if(*head == NULL){
        *head = new Node(data);
        return true;
    }

    *head = new Node(data,*head);
    return true;
}
bool insertAtEnd(Node **head,int data){
    if(*head==NULL){
        *head = new Node(data);
        return true;
    }

    Node *iter = *head;
    while(iter->next != NULL){
        iter = iter->next;
    }

    iter->next = new Node(data);
    return true;
}
bool insertAtPos(Node **head,int pos,int data){
    if(pos ==1)
    {
        insertAtBegin(head,data);
        return true;
    }
    
    int currentPos =1;
    Node *p = *head,*q=NULL;
    while (p!=NULL)
    {
        if(pos == currentPos){
            q->next = new Node(data,p);
            return true;
        }
        q = p;
        p = p->next;
        currentPos++;
    }

    cout<<"Invalid Position"<<endl;
    return false;
    
}