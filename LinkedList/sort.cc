#ifndef MAIN_H
    #include "main.h"
#endif

void ascendingSort(Node**);
void decendingSort(Node**);
Node* MergerTwoLL(Node **,Node**);


void Sort(Node** head){
    int choice;
    cout<<"Which Order Do you want to sort the LinkedList?\n1. Ascending\n2. Decending"<<endl;

    cout<<"Make a choice : ";

    if(choice ==1 ){
        ascendingSort(head);
    }else if(choice ==2){
        decendingSort(head);
    }else{
        cout<<"Invalid Option! Select a valid one..";
        Sort(head);
        return;
    }

}
// todo: implementation
void ascendingSort(Node** head){

}

// todo : implementation
void decendingSort(Node** head){
    
}
bool addAtEnd(Node **head,int data){
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

Node* MergerTwoLL(Node **h1,Node**h2){
    Node *result = NULL;
    Node *ptr1 = *h1, *ptr2=*h2;

    while(ptr1!=NULL || ptr2!=NULL){
        if(ptr1->data > ptr2->data ){
            addAtEnd(&result,ptr2->data);
            ptr2= ptr2->next;
        }else{
            addAtEnd(&result,ptr1->data);
            ptr1=ptr1->next;
        }
    }


    return result;

}