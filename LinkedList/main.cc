#ifndef MAIN_H
#include "main.h"
#endif

int main()
{
    Node *head = NULL;
    while (true)
    {
        int choice;
        cout <<endl<< "1. Insert\n2. Delete\n3. Search\n4. Display\n5. Sort\n6. Count Number of Nodes\n7. Reverse\n8. Remove Duplicates\n0. Exit" << endl;
        cout << "Enter The Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Insert(&head);
            break;
        case 2:
            Delete(&head);
            break;
        case 3:
            Search(head);
            break;
        case 4:
            Display(head);
            break;
        case 5:
            Sort(&head);
            break;
        case 6:
            CountNodes(head);
            break;
        case 7:
            Reverse(&head);
            break;
        case 0:
            exit(0);
        default:
            cout<<"Invalid Option!!"<<endl;
            system("cls");
            break;
        }
        //system("cls");
    }
}
