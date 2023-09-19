#ifndef MAIN_H
    #include "main.h"
#endif

bool InsertBegin(Node **head,int data){
    if(*head == NULL){
        *head = new Node(data);
        return true;
    }

    *head = new Node(data,*head);
    return true;
}

void Reverse(Node **head){
    Node *temp = NULL;

    Node *iter = *head;
    while(iter != NULL){
        InsertBegin(&temp,iter->data);
        iter = iter->next;
    }

    *head = temp;
}