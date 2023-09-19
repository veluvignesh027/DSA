#ifndef MAIN_H
#include"main.h"
#endif

int Search(Node* head){
    int elem;
    cout<<"Enter the element you want to search : ";cin>>elem;
    int idx =0;
    while (head!=NULL)
    {
        idx++;
        if(head->data == elem){
            cout<<"Element "<<elem<<" found at the index "<<idx<<endl;
            return idx;
        }
        head = head->next;
    }

    cout<<"Element Not Found in the List!"<<endl;
}