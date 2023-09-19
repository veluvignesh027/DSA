#ifndef MAIN_H
#include "main.h"
#endif
bool removeBegin(Node **);
void Delete(Node **head)
{
    int pos;
    Display(*head);
    cout << endl<< "Enter the Position of the NODE you Want to Delete (1-Based Index) : ";
    cin >> pos;
    system("cls");

    if (pos == 1){
        removeBegin(head);
        return;
    }

    Node *p = *head, *q = NULL;
    int currentPos = 1;
    while (p != NULL)
    {
        if (currentPos == pos)
        {
            q->next = p->next;
            delete (p);
            p = NULL;
            return;
        }
        currentPos++;
        q = p;
        p = p->next;
    }

    cout<<"Invalid Position!"<<endl;
}

bool removeBegin(Node **head)
{
    Node *temp = *head;
    *head = (*head)->next;
    delete (temp);
    temp = NULL;

    return true;
}