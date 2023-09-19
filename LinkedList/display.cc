// display.cc
#ifndef MAIN_H
    #include "main.h"
#endif
#include <iostream>

void Display(Node* head){
    if(head == NULL){
        std::cout << "End of List(NULL)" << std::endl;
        return;
    }
    std::cout << head->data << "->";
    Display(head->next);
}

void CountNodes(Node *head){
    int noOfNodes =0;
    while(head != NULL){
        noOfNodes++;
        head=head->next;
    }
    cout<<"The total Number of Nodes in the LinkedList is : "<<noOfNodes;
}