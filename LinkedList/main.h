#include <bits/stdc++.h>
using namespace std;

#ifndef MAIN_H
#define MAIN_H
#endif
class Node
{
public:
    int data;
    Node *next;

    // Constructors
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int t)
    {
        data = t;
        next = NULL;
    }
    Node(int t, Node *p)
    {
        data = t;
        next = p;
    }
};

// Insert function will insert the data given by user
// Has more methods like begin,end, at a specific position
void Insert(Node **);
//Used to delete a node from the linked list
void Delete(Node **);
// just a linear search algo to search the element
int Search(Node *);
// used to reverse the list by creating another node and iterate through this list
// add all the elements at the begin of new list
// Lastly, assign the new node to the head input.
void Reverse(Node **);
// sort the given LinkedList in both ascending as well as decendning order
void Sort(Node **);
//todo
void RemoveDup(Node *);
//Function used to count no of nodes present in a node
// Display is also same with printing the data in STDOUT
void CountNodes(Node *);
// It is implemented in a recursive calls 
// Will iterate through the list and print all the element
// IN : pointer to the List , OUT : Print all nodes data and returns no.of nodes
void Display(Node *);
